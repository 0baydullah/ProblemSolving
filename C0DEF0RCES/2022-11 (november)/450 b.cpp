#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;
int mod = (int) 1e9+7;
ll x, y;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    cin  >> x >> y;
    ll n; cin >> n;
    ll a[6] = {x-y,x,y,y-x,-x,-y};
    ll ans = a[n%6];
    while(ans<0)
        ans+=mod;
    cout << ans%mod << endl;

    return 0;
}