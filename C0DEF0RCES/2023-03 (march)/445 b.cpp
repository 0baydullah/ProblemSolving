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

int n, m;
vector<int>g[53];
bool vis[53];

void dfs(int n){
    vis[n]=1;
    for(auto x : g[n]){
        if(!vis[x])
            dfs(x);
    }
}


int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    cin >> n >> m;
    if(m==0) return cout << 1 , 0;
    if(m==1) return cout << 2 , 0;
    while(m--){
        int x,y; cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }
    int cnt{0};
    for(int i=1 ; i<=n ; i++){
        if(!vis[i]){
            cnt++;
            dfs(i);             
        }
    }

    cout << (1LL<<(n-cnt)) << endl;

    return 0;
}