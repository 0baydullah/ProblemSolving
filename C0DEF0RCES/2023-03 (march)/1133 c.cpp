#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back
#define all(v) v.begin(),v.end()
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

    int n; cin >>n;
    ll a[n];
    map<ll,int> m;
    for(int i=0 ;i<n; i++){ cin >> a[i];
        m[a[i]]++;
    }
    ll ans{0};
    sort(a,a+n);
    for(int i=0; i<n ; i++){
        ll tm=0;
        for(int j=a[i] ; j<=a[i]+5 ; j++ ){
            tm+=m[j];
        }
        ans=max(ans,tm);
    }

    cout << ans << endl;

    return 0;
}