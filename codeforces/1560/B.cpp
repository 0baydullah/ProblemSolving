#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        ll a,b,c,n,dif,d1,d2;
        cin >> a >> b >> c;

        n = abs(a-b)*2;
        if(a>n || b > n || c>c) {
            cout << -1 << endl;
            continue;
        }
        dif = abs(a-b);
        if (c>n){cout << -1 << endl; }
        else{
            d1= c+dif;
            d2= c-dif;
            if(d1<=n ) cout << d1 << endl;
            else if (d2 <= n) cout << d2 << endl;
            else cout << -1 << endl;
        }
    }

    return 0;
}
