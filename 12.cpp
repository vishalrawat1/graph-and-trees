#include<bits/stdc++.h>
using namespace std;
const int n= 1e5+10;
int vis[n];
vector<int> g[n];
int level[n];
//  bfs in tree;
// level order traversel needed to traverse breth wise
void bfs(int node , int par){
        queue<int> q;
        q.push(node);
        vis[node]=1;
        


        while(!q.empty()){
            int cur = q.front();
            q.pop();
            for(auto child:g[cur]){
                if(vis[child]==1)continue;
                q.push(child);
                bfs(child , node);
                level[child]=level[cur]+1;
            
            }
           


        }
     
    

}

int main(){
    int n;
    cin>>n;

    for(int i=0 ; i<n-1 ; i++){
        int x1 , x2;
        cin>>x1 , x2;
        g[x1].push_back(x2);
        g[x2].push_back(x1);
    }
    bfs(1 , 0);


}
