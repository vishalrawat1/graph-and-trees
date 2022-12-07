#include<bits/stdc++.h>
using namespace std;
const int n=1e5+10;
vector<int> g[n];
int max_depth[n];
int depth[n];
int subtree[n];
int val[n];
const int m = 1e9+10;
// edge deletion

void dfs(int vertex , int par){
    
    subtree[vertex]+=val[vertex];
    for(auto child:g[vertex]){
        if(child==par)continue;
        dfs(child , vertex);
        subtree[vertex]=subtree[vertex]+subtree[child];
    }
}

int main(){
    int v;
    cin>>v;
    for (int i = 0; i < v-1; i++)
    {
        int x,y;
        cin>>x>>y;

        g[x].push_back(y);
        g[y].push_back(x);

    }
    dfs(1,0);
    long long ans=0;
    for(int i=2 ; i<n;i++){
        int part1 = subtree[i];
        int part2 = subtree[1]-part1;
        ans = max(ans , (part1 * 1ll * part2)%m);
    }
}