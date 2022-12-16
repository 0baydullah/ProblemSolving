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
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        ll n ;cin >> n;
        ll a[n];
        ll mx=-1;
        for(int i=0 ; i<n; i++){
            cin >> a[i];
        }
        vector<pair<ll,ll>>v;
        for(int i=0 ; i<n ; i++){
            ll x= 1LL<<((ll)log2(a[i])+1);
            if(x-a[i]!=0)v.pb({i+1,x-a[i]});
        }
        cout << v. size() << endl;
        for(auto u:v){
            cout << u.first << " " << u.second << endl;
        }
    }
    return 0;
}