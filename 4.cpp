#include<bits/stdc++.h>
using namespace std;
const int n=1e3+10;
int graph[n][n];
vector<int> graph2[n];
bool vis[n];
//  cycle in the graph
// 8 5
// 1 2  
// 2 3
// 2 4
// 3 5
// 6 7 
// 
// 


bool dfs(int vertex , int par){
    bool cyclepresent=false;
    vis[vertex]=true;
    for(auto child:graph2[vertex]){
        if(vis[child] && child==par)continue;
        if(vis[child]) return true;

        cyclepresent = cyclepresent || dfs(child , vertex);

    }
    return cyclepresent;
}


int main(){
    int v,e;
    cin>>v>>e;
    int graph[v+1][e+1];

    for (int i = 0; i < e; i++)
    {
        int v1 , v2 ;
        cin>>v1>>v2;
        graph[v1][v2]=1;
        graph[v2][v1]=1;

        graph2[v1].push_back(v2);
        graph2[v1].push_back(v2);


    }
    
    bool cyclepresent=false;
    for (int i = 0; i < v; i++)
    {
        if(vis[i]) continue;
        if(dfs(i , 0)){
            cyclepresent=true;
            break;
        }
    }
    
    return cyclepresent;

    // adjacent list;

}