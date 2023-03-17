#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

int vis[20005];
vector<int>g[20005];
int edge=0;
bool pre_vis=0;

void dfs(int n){
    vis[n]=true;
    for(auto x :g[n]){
        if(vis[x]==0)
            dfs(x);
        
    }
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int n,e; cin >> n >> e;
    int cc[n+2]={0},cnt=0;
    if(e!=n-1){
        pre_vis=1;
    }
    while(e--){
        int u,v; cin >> u >> v;

        if(u==v){
            pre_vis=1;
        }
        g[u].pb(v);
        g[v].pb(u);
    }
    for(int i=01 ; i<=n ; i++){
        if(vis[i]==0){ dfs(i);
        cnt++;}
    }

    if(pre_vis==1) cout << "NO"<< endl;
    else if (cnt!=1) cout  <<  "NO" << endl;
    else cout << "YES\n";

    return 0;
}