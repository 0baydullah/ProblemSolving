#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

void miryoku()
{
    ll n,m; cin >> n >> m;
    ll mx=n-m+1;
    mx=mx*(mx-1)/2;
    ll x = n/m;
    ll md = n%m;
    ll ans=0;
        ll ansmd = x*(x+1)/2*md;
        ans = x*(x-1)/2*(m-md);
        ans+=ansmd;
  
    cout << ans << " " << mx << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
  //  cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        miryoku();
    }

    return 0;
}