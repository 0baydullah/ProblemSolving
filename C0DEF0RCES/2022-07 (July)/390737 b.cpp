#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll t; cin >> t; while(t--)
    {
        ll n; cin >> n ;
        ll a[n];
        for(int i=0 ; i<n ; i++)
            cin >> a[i];
        ll ans = 0;
        for(int i=0 ; i<n ; i++)
            ans |= a[i];
        cout << ans << endl;
    }

    return 0;
}
