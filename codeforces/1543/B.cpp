#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        ll s=0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            s+=a[i];
        }
        ll k = s%n;
        ll ans = k*(n-k);
        cout << ans << '\n';
    }

    return 0;
}
