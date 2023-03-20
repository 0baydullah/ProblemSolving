#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

vector<bool>vis;
vector<vector<int>>g;

void dfs(int n){
    vis[n]=1;
    for(auto x:g[n]){
        if(!vis[x]) dfs(x);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
        int n; cin >> n;
        g.clear();
        g.resize(n);
        vis.assign(n,0);
        int e; cin >> e;
        while(e--){
            int u,v; cin >> u >> v;
            g[u].pb(v);
            g[v].pb(u);
        }
        int cnt{0};
        for(int i=0 ; i<n ; i++){
            if(!vis[i]){
                dfs(i);
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}