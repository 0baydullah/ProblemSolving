#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int>edge[1000006];
vector<int>cost[1000006];
int vis[1000006];
int cn=0;
map<int,int> mp;
void dfs(int u) {
    vis[u] = 1;
    for(int i = 0;i < edge[u].size();i++) {
        int v = edge[u][i];
        if(vis[v] != 1) {
            dfs(v);
            ///cout<<"u= "<<u<<" v="<<v<<endl;
            if(edge[u].size()==2 and edge[v].size()==1 and mp[u]==0){
            mp[u]==1;
            cn++;
        }
        }

    }
}

int main() {
    int n;
    cin>>n;
    mp.clear();
    cn=0;
    for(int i=0;i<=n;i++) {
        edge[i] = {};
        vis[i] = 0;
    }
    int u,v;
    mp[1] =1;
    for(int i = 0;i<n-1;i++) {
        cin>>u>>v;
        edge[u].push_back(v);
        edge[v].push_back(u);

    }
    dfs(1);
    cout<<cn<<endl;

}
