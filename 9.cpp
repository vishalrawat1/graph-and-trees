//diameter- max no of edges btw the two nodes

#include<bits/stdc++.h>
using namespace std;
const int n=1e5+10;
vector<int> g[n];
int max_depth[n];
// to find the max for all the nodes
int depth[n];
void dfs(int vertex , int par){
    for(auto child:g[vertex]){
        if(child==par)continue;
        depth[child]=depth[vertex]  +1;
        dfs(child , vertex);
        
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
    int max_depth=-1;
    int node;
    for (int i = 0; i < v-1; i++)
    {
        if(depth[i]>max_depth){
            max_depth=depth[i];
            node=i;
        }
    }
    dfs(node,0);
    for (int i = 0; i < v-1; i++)
    {
        if(depth[i]>max_depth){
            max_depth=depth[i];
            
        }
    }
    cout<<max_depth<<endl;


    
    
    
}