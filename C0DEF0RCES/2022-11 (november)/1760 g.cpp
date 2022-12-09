#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long
#define N (int)1e6+7

using namespace std;
int n,a,b;
bool ok;

vector<pair<int,int>>adj[N];
map<int,bool>seen;

void dfs0(int curr,int par, int x){
    if(curr == b) return;
    seen[x]=1;
    for(auto i:adj[curr]){
        if(i.first==par)continue;
        dfs0(i.first,curr,x^i.second);
    }
}

void dfs1(int curr,int par,int x){
    if(seen[x] and curr!=b) ok =1;

    for(auto i:adj[curr]){
        if(i.first==par) continue;
        dfs1(i.first,curr,x^i.second);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        cin >> n >> a >> b;
        for(int i=0; i<=n+1 ;i++){
            adj[i].clear();
        }
        seen.clear();
        ok=0;
        for(int i=1 ; i<=n-1; i++){
            int u,v,w; cin >> u >> v >> w;
            adj[u].pb({v,w});
            adj[v].pb({u,w});
        }

        dfs0(a,-1,0);
        dfs1(b,-1,0);

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}