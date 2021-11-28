#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll n ,x = 0; cin >> n;
    ll a[n],b[n];
    for ( ll i=0 ; i<n ; i++)
    {
        cin >> b[i];
        b[i] += x;
        x=max(x,b[i]);
        cout << b[i] << ' ';
    }

    return 0;
}
