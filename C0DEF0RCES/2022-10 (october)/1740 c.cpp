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
    int n; cin >> n;
    ll a[n];
    for(int i=0 ;i<n; i++) cin >> a[i];
    sort(a,a+n);
  //  cout <<"******" << endl;
//for(int i=0 ; i<n ;i++) cout << a[i] << " " ; cout << endl;
    ll ans = 0;

    for(int i=0 ; i+2<n ; i++){
        ans=max(ans,a[n-1]-a[i]+a[i+1] - a[i]);
    }
    for(int i=2 ; i<n ; i++){
        ans = max(ans,a[i] - a[0 ] + a[i] - a[i-1]);
    }
    cout << ans << endl;
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