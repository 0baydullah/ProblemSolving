#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    //cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        int n; cin >> n;
        int mod = 1000000007;
        ll sum=0,mul=1;
        ll a[n];
        for(int i=0 ; i<n; i++){
            cin >> a[i];
            sum+=a[i];
            sum%=mod;
            mul*=a[i];
            mul%=mod;
        }
        //cout << store%mod << endl;
        int ans = (sum+mul)%mod;
        cout << ans << endl;
    }

    return 0;
}