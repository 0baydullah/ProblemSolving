#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back
#define all(v) v.begin(),v.end()
#define sort(s)  sort(s.begin(),s.end())
#define rsort(s)  sort(s.rbegin(),s.rend())
#define rev(v)    reverse(v.begin(),v.end())

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll n; cin >> n;
    vector<ll> a(n),b(n);
    for(int i=0 ; i<n; i++) cin >> a[i];
    ll z{0};
    for(int i=0 ; i<n; i++){
        cin >> b[i];
        if(!b[i]) z++;
    }

    map<pair<ll,ll>,ll>mp;
    ll mx{0},d{0};

    for(int i=0; i<n; i++){
        if(a[i]==0 and b[i]==0) d++;
        if(a[i]==0 or b[i]==0) continue;
        ll x= a[i]/gcd(a[i],b[i]);
        ll y= -b[i]/gcd(a[i],b[i]);

        mp[{y,x}]++;
        mx=max(mp[{y,x}],mx);
    }
    cout << max(z,mx+d) << endl;

    return 0;
}