#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll t; cin >> t; for(int T=1 ; T<=t ; T++)
    {
        int m,n; cin >> m>>n;
        vector<int>v;
        for(int i=0; i<m ; i++)
        {
            ll sum{0};
            for(int j=0 ; j<n ; j++)
            {
                int x; cin >>x;
                sum+=x;
            }
            v.pb(sum);
        }
        ll ans=0;
        for(auto u:v)
            ans^=u;
        cout <<"Case " << T <<": ";
        if(ans) cout << "Alice\n";
        else cout << "Bob\n";
    }

    return 0;
}
