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
        ll a , b , c , d;
        cin >> a >> b >> c >> d;
        a*=d, b*=c;
        if(a==b) cout << 0 << endl;
        else if(!a or !b) cout << 1 << endl;
        else
        {
            ll g = __gcd(a,b);
            a/=g,b/=g;
            if(a==1 or b==1) cout << 1 << endl;
            else cout << 2 << endl;
        }
    }

    return 0;
}
