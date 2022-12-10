#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

int mod = 1000000007;
ll dp[109][10069];
ll val[109];
int n,m;

ll call(ll i, ll taken){
    if(i>=n){
        if(taken==0) return 1;
        else return 0;
    }

    if(dp[i][taken] != -1) return dp[i][taken];
    int a=0,b=0;
    if(taken-val[i]>= 0)
        a=call(i,taken-val[i])%mod;
    b=call(i+1,taken)%mod;
    return dp[i][taken] = (a+b)%mod;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        memset(dp,-1,sizeof(dp));
        cin >> n >> m;
        for(int i=0 ; i<n ; i++){
            cin >> val[i];
        }
        ll ans = call(0,m)%mod;
        cout << ans%mod << endl;

    }

    return 0;
}