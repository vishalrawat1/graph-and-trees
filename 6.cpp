#include<bits/stdc++.h>
using namespace std;
const int n=1e3+10;
int graph[n][n];
vector<int> graph2[n];
bool vis[n];
// number of islands;

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


// bool dfs(int i , int j ,  int water , int island ,vector<vector<char>>& grid){
//     int n = grid.size();
//     int m = grid[0].size();
//     int count =0;
//     bool itisiland=false;
//     if(i<0 || j<0)return;
//     if(i>=n || j>=n)return;
//     itisiland=true;

//     dfs(i-1 , j , water , island , grid);
//     dfs(i+1 , j ,  water , island , grid);
//     dfs(i , j-1 ,  water , island , grid);
//     dfs(i , j+1 ,  water , island , grid);

//     return itisiland;



// }


    int numIslands(vector<vector<char>>& grid){
        int count=0;
        int n=grid.size();
        int m=grid[0].size();

        int cyclepresent=0;
        for (int i = 0; i < n; i++)
        {
            if(vis[i]) continue;
            if(dfs(i , 0)){
                cyclepresent++;

            }
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
    
    

    // adjacent list;

}