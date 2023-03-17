#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;
int n,m;
int vis[300004];
vector<int>g[300002];
int nd=0,ed=0;

void dfs(int node ){
    vis[node]=1;
    nd++;
    ed+=g[node].size();
    for(auto x:g[node]){
        if(!vis[x])
        dfs(x);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    cin >> n >> m;
    while(m--){
        int u,v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    bool flag=1;
    for(int i=1 ; i<=n ; i++){
        if(vis[i]==0){
            nd=0;ed=0;
            dfs(i);
            if(nd!=ed/2){flag=0;break;}
        }
    }
    if(flag) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}