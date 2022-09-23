#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

const int N = (int) 1e6+5;
vector<int>graph[N];
vector<bool> vis;

void DFS(int curr){
    vis[curr]=1;
    for(auto x : graph[curr]){
        if(!vis[x])
            DFS(x);
    }
}

void miryoku()
{
    int n; cin >> n;
    n*=2;
    string s; cin >> s;
    stack<pair<char,int>>stx;
    
    for(int i=0 ; i<=n ; i++) graph[i].clear();
    vis.assign(n+1,0);

    int cc{0};

    for(int i=0 ; i<n ; i++){
        if(s[i]=='(')
            stx.push({s[i],i});
        else {
            int u=i;
            int v=stx.top().second;

            graph[u].pb(v);
            graph[v].pb(u);
            stx.pop();
        }
    }

    for(int i=0 ; i<n-1 ; i++){
        if(s[i]==')' and s[i+1]=='('){
            graph[i].pb(i+1);
            graph[i+1].pb(i);
        }
    }

    for(int i=0 ; i<n ; i++){
        if(!vis[i]){
            cc++;
            DFS(i);
        }
    }
    cout << cc << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        miryoku();
    }

    return 0;
}