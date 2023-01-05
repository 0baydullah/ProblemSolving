#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;
ll a[107];
int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    //cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        ll n; cin >> n;
        ll mx=-1;
        for(int i=0 ; i<n; i++){cin >> a[i]; mx = max(mx,a[i]);}
        ll mn=1e18;
        
        for(int i=1 ; i<=mx ; i++){
            ll cost=0;
            for(int j=0 ; j<n ; j++){
                cost += (a[j]-i)*(a[j]-i);
            }
            mn=min(mn,cost);
        }
        cout << mn << endl;
    }

    return 0;
}