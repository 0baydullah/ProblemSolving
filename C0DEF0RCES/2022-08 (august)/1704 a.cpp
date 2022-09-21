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
        int n,x,ans{0}; cin >> n >> x;
        int a[n];
        for(int i=0 ; i<n ;i++) cin >> a[i];
        int mn=a[0];
        int mx=a[0];

        int res = 0 ;
        for(int i=1 ; i<n ; i++)
        {
            if(a[i]<mn)
                mn=a[i];
            if(a[i]>mx)
                mx=a[i];
            if(mx-mn > 2*x)
            {
                ans++;
                mn=mx=a[i];
            }
        }
        cout << ans << endl;
    }

    return 0;
}
