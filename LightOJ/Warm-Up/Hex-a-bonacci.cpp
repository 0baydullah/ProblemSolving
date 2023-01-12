#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;
int mod = 10000007;
ll a,b,c,d,e,f,n;

ll dp[100001];

ll fn(ll n) {
    if(dp[n]!=-1) return dp[n];
    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;
    return dp[n] = fn(n-1)%mod + fn(n-2)%mod + fn(n-3)%mod + fn(n-4)%mod + fn(n-5)%mod + fn(n-6)%mod;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
      cout << "Case " << t << ": ";
      memset(dp,-1,sizeof(dp));
         cin >> a>>b>>c>>d>>e>>f>>n;
        cout << fn(n)%mod << endl;;    
    }

    return 0;
}