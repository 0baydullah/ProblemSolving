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
    int a[n];ll sum{0};
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
        sum+=a[i];
    }
    ll ans=LLONG_MAX;
    for(int i=0 ; i<1<<n ;i++){
            ll s{0};
        for(int j=0 ; j<n ;j++){
            if(i&1<<j)s+=a[j];
        }
        ll curr=abs((sum-s)-s);
        ans = min(ans,curr);
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
   // cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        miryoku();
    }

    return 0;
}