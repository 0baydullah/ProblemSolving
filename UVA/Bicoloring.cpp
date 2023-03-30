#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back
#define all(v) v.begin(),v.end()
#define sort(s)  sort(s.begin(),s.end())
#define rsort(s)  sort(s.rbegin(),s.rend())
#define rev(v)    reverse(v.begin(),v.end())

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

vector<vector<int>>g;
vector<int> vis;
bool flag;

void dfs(int n, int c){
    if(flag)return;
    vis[n]=c;

    for(auto x : g[n]){
        if(vis[x]==-1){
            dfs(x,1-c);
        }
        else if(vis[n]==vis[x]){
            flag=1;
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    while(1){
        int n; cin >> n;
        if(n==0)return 0;
        int e; cin >> e;
        g.clear();
        g.resize(n+1);
        vis.assign(n+1,-1);
        flag=0;
        while(e--){
            int u,v;cin >> u >>v;
            g[u].pb(v);
            g[v].pb(u);
        }

        for(int i=1 ; i<=n; i++){
            if(vis[i]==-1)dfs(i,0);
        }

        if(flag) cout << "NOT BICOLORABLE.\n";
        else cout << "BICOLORABLE.\n";
    }
}
