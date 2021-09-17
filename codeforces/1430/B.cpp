#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll t; cin >> t ;
    while (t--)
    {
        ll n, k; cin >> n >> k; ll a[n];
        for(int i=0 ; i<n ; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n,greater<ll>());
        for(int i=0 ; i<k ; i++)
        {
            a[i+1] += a[i];
            a[i] = 0;
        }
        sort(a,a+n);
        cout << a[n-1]-a[0] << endl;
    }

    return 0;
}
