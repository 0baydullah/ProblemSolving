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

void solve()
{
    ll n, q, sum = 0;
    cin >> n >> q;
    vector <ll> a(n+1), res(n+1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        sum += a[i];
    }
    res[0] = 0;
    res[1] = a[1];
    for(int i = 2; i <= n; i++){
        res[i] = res[i-1] + a[i];
    }
    while(q--){
        ll l, r, k;
        cin >> l >> r >> k;
 
        ll tm = sum + k * (r - l + 1);
 
        tm += res[r] - res[l-1];
        if(tm % 2 == 1) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        solve();
    }

    return 0;
}