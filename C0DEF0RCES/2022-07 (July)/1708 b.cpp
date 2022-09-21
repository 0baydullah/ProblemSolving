#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll t; cin >> t;    New:
     while(t--)
    {
        int n , l , r; cin >> n >> l >> r;
        vector <ll> v;
        for(int i=1 ; i<=n ; i++)
        {
            ll x=r/i;
            x*=i;
            if(x<l)
            {
                cout << "NO\n";
                goto New;
            }
            v.pb(x);
        }
        cout << "YES\n";
        for(auto u : v) cout << u << " ";
        cout << endl;

    }

    return 0;
}
