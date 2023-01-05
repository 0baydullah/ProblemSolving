#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

ll MOD = 1e9+7;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
//cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        ll l,r,mod;
        cin >> l >> r >> mod;
        ll sum=0;
       // ll lsum = l%mod;
        ll range=(r-l)/mod;
        sum+=((mod)%MOD*(mod-1)%MOD/2)*range%MOD;
        l=l%mod;r=r%mod;
        sum+=((r)*(r-1)%MOD/2)-((l)*(l-1)%MOD/2);
sum+=((r)*(r-1)%MOD/2);
        cout << sum % MOD << endl;
    }

    return 0;
}