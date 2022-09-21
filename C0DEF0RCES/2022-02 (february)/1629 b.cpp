#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll t; cin >> t; while(t--)
    {
        ll l, r, k;
        cin >> l >> r >> k;
        ll ans{0};
        ll x = (r-l+1);
        ans = x/2;
        if(l%2 && r%2) ans++;
        if(l==r)
        {
            if(l==1) cout << "NO" << endl;
            else  cout << "YES" << endl;
        }
        else if (k>=ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
