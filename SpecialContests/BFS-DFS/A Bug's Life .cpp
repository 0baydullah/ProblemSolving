#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

int n, e;
vector<vector<int>>g;
vector<int>gender;
bool flag;



void dfs(int n, int c){
    if(flag) return;

    gender[n]=c;

    for(auto x : g[n])
        if(gender[x]==-1)
            dfs(x, 1-c);
        else if(gender[n] == gender[x]){
            flag=1;
            return;
        }
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
      cout << "Scenario #" << t << ": ";

    cin >> n >> e;
    g.clear();
    g.resize(n+1);
    gender.assign(n+1,-1);
    flag = 0;
        
        while(e--){
            int u,v; cin >> u >> v;
            g[u].pb(v);
            g[v].pb(u);
        }
        for(int i=1 ; i<=n; i++)
            if(gender[i]==-1) dfs(i,0);

        if(flag) cout << "Suspicious bugs found!\n";
        else cout << "No suspicious bugs found!\n";
        
    }

    return 0;
}