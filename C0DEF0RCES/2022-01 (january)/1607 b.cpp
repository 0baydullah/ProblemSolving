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
        ll x, n;
        cin >> x >> n;
        if(x%2==0)
        {
            if(n%4==0) cout << x << endl;
            if(n%4==1) cout << x-n << endl;
            if(n%4==2) cout << x+1 << endl;
            if(n%4==3) cout << x+n+1 << endl;
        }
        else
        {
            if(n%4==0) cout << x << endl;
            if(n%4==1) cout << x+n << endl;
            if(n%4==2) cout << x-1 << endl;
            if(n%4==3) cout << x-n-1 << endl;
        }
    }

    return 0;
}
