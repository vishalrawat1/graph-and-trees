//tree - subtree sum

#include<bits/stdc++.h>
using namespace std;
const int n = 1e5+10;
vector<int> g[n];
int subtree[n];
//to find the height and the depth
int height[n];
int depth[n];

void dfs(int vertex , int par ){
    for(auto child:g[vertex]){
        depth[child]=depth[vertex]+1;
        if(child==par)continue;
        dfs(child , vertex);
        height[vertex]=max(height[vertex],height[child]+1);
        

    }

}
void dfs2(int vertex , int par){
    int count=0;
    if(vertex % 2==0){
        count++;
    }
    subtree[vertex] += vertex;
    for(auto child:g[vertex]){
        if(child==par)continue;
        dfs2(child , vertex);

        subtree[vertex]=subtree[vertex]+subtree[child];

    }
}

//for the subtree sum -  pre calculating for all the subtree;

int main(){
    int v;
    cin>>v;
    for(int i=0 ; i<=v-1; i++){
        int x , y;
        cin>>x>>y;

        g[x].push_back(y);
        g[y].push_back(x);


    }
    int q;
    while(q--){
        int v;
        cin>>v;
        cout<<subtree[v]<<endl;

    }

    
}