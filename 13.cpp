#include <bits/stdc++.h>
using namespace std;
const int n = 1e5+10;
vector<int> g[n];
int vis[n][n];
int val[n][n];
int level[n][n];

//sortest path

void bfs(int s){
    queue<int> q;
    q.push(s);
    vis[s]=1;
    while(!q.empty()){
        int curr=q.front();
        q.pop();
        for(auto c:g[s]){
            if(vis[c]==1)continue;
            q.push(c);
            bfs(c);
            level[c]=level[curr]+1;
        }
    }
}

// reset func for vis array

void reset()
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n-1; i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    
}