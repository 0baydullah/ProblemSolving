#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;
ll a,b,t{1};
ll mod = 1e7+7;

int main()
{
   // ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    while(scanf("%ld%ld",&a,&b) ){
      cout << "Case #" << t << ": ";
        ll ans = (a%mod)*(b%mod);
        cout << ans%mod << endl;
        t++;
    }

    return 0;
}