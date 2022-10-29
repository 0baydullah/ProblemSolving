#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

vector<int>tree[2069],sup;


int dfs(int u){
    int val=0;
    for(auto x:tree[u]){
        val=max(val,dfs(x));
    }
    return val+1;
}

void miryoku()
{
    int n; cin >> n;
    for(int i=0 ; i<n; i++){
        int x; cin >> x;
        if(x==-1){
            sup.pb(i+1);
            continue;
        } 
        tree[x].pb(i+1);
    }

    int mx=0;
    for(auto u:sup) mx=max(mx,dfs(u));
    cout << mx << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
 //   cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        miryoku();
    }

    return 0;
}