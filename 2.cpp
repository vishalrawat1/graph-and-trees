#include<bits/stdc++.h>
using namespace std;
const int n=1e3+10;
int graph[n][n];
vector<pair<int , int>> graph2[n];


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

        graph2[v1].push_back({v2,wt});
        graph2[v1].push_back({v2,wt});


    }

    // adjacent list;

}