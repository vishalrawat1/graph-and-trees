#include<bits/stdc++.h>
using namespace std;
const int n=1e3+10;
int graph[n][n];
vector<int> graph2[n];
bool vis[n];

// dfs traversal 

// 8 5
// 1 2  
// 2 3
// 2 4
// 3 5
// 6 7 
// 
// 


void dfs(int vertex){

    vis[vertex]=true;
    
    for(auto child:graph2[vertex]){
       if(vis[vertex])continue;
       dfs(child);
    }
}



int main(){
    int v,e;
    cout<<"enter the no of vertices and the edges "<<endl;
    cin>>v>>e;
    int graph[v+1][e+1];

    for (int i = 0; i < e; i++)
    {
        int v1 , v2 ,wt;
        cout<<"enter the vertice1 and vertice2 and weight"<<endl;
        cin>>v1>>v2>>wt;
        graph[v1][v2]=wt;
        graph[v2][v1]=wt;

        graph2[v1].push_back({v2});
        graph2[v1].push_back({v2});


    }

    

}