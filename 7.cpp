// dfs in tree;

#include<bits/stdc++.h>
using namespace std;
const int n=1e5+10;
vector<int> g[n];
int height[n];
// max from node to leaf
int depth[n];
// no of edge from root to node

void dfs(int vertex , int par){
    for(auto child:g[vertex]){
        depth[child]=depth[vertex]+1;
        if(child==par)continue;
        dfs(child , vertex);
        height[vertex]=max(height[vertex],height[child]+1);
    }
}
int main(){
    int n;
    cin>>n;
    // n=vetex;
    // n-1 edges;


    for(int i=0 ; i<n-1 ; i++){
        int x , y;
        // from x to y
        cin>>x>>y;

        g[x].push_back(y);
        g[y].push_back(x);

        
    }
    dfs(1 , 0);
    for (int i = 0; i < n-1; i++)
    {
        /* code */
        cout<<depth[i]<<" "<<height[i]<<" "<<endl;
    }
    

}