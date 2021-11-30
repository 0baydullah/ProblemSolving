#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll t; cin >> t;
    while(t--)
    {
        ll x; cin >> x;
        x%2 ? cout << x/2+1 << endl : cout << x/2 << endl;
    }

    return 0;
}
