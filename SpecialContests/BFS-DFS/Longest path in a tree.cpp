#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;



int vis[10002];
int mx_node,mx,n;
vector<int>graph[10002];

void bfs(int node ,int dist){
    vis[node]=1;
    if(dist>mx) {
        mx=dist;
        mx_node=node;
    }
    for(auto x : graph[node]){
        if(!vis[x])
            bfs(x,dist+1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    cin >> n;

    for(int i=1 ; i<n ; i++){
        int u,v; cin >> u >> v;
        graph[u].pb(v);
        graph[v].pb(u);
    }

    bfs(1,0);
    memset(vis,0,sizeof(vis));
    bfs(mx_node,0);
    cout << mx << endl;

    return 0;
}