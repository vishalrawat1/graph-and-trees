#include<bits/stdc++.h>
using namespace std;
const int n=1e3+10;
int graph[n][n];
vector<int> graph2[n];
bool vis[n];
// flood fill

void dfs(int i, int j , int initialcol ,int newcolor ,  vector<vector<int>>& image  ){
    int n=image.size();
    int m=image[0].size();
    if(i<0 || j<0)return;
    if(i>=n || j>=n)return;
    if(image[i][j]!=initialcol) return;
    image[i][j]=newcolor;
    dfs(i-1 , j , initialcol , newcolor , image);
    dfs(i+1 , j , initialcol , newcolor , image);
    dfs(i , j-1 , initialcol , newcolor , image);
    dfs(i , j+1 , initialcol , newcolor , image);

}

 vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color){
    int initialcol=image[sr][sc];
    if(initialcol != color)
    dfs(sr , sc , initialcol , color , image);
    return image;



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