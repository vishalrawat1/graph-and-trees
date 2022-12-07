#include<bits/stdc++.h>
using namespace std;
const int n=1e5+10;
vector<int> g[n];
int par[n];

void dfs(int v , int p=-1){
    par[v]=p;
    for(auto child:g[v]){
        if(child==p)continue;
        dfs(child,v);

    }
}

vector<int> path(int v){
    vector<int> ans;
    while (v!=-1)
    {
        ans.push_back(v);
        v=par[v];
        /* code */
    }
    reverse(ans.begin(), ans.end());
    return ans;

    
}

int main(){
    int n;
    cin>>n;
    
    for (int i = 0; i < n-1; i++)
    {
        int x, y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);

    }
    dfs(1);
    // entering the nodes whoes diametere to find

    int x1,y1;
    cin>>x1>>y1;
    vector<int> path1=path(x1);
    vector<int> path2=path(y1);
    int max_size=max(path1.size() , path2.size());
    int lca=0;
    for(int i=0; i<max_size ; i++){
        if(path1[i]==path2[i]){
            lca=path1[i];

        }
        else{
            break;
        }
    }
    cout<<lca<<endl;


    

}