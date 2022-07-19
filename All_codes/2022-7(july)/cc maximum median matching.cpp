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
        int n; cin >>n;
        int a[n],b[n];
        vector<ll>c;
        for(int i=0 ; i<n ; i++) cin >> a[i];
        for(int i=0 ; i<n ; i++) cin >> b[i];
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        for(int i=0 ; i<n ; i++)
        {
            c.pb(a[i]+b[i]);
        }
        sort(c.begin(),c.end());
        if(n==1) cout << c[0] << endl;
        else
        cout << c[(n/2)+1] << endl;

    }

    return 0;
}
