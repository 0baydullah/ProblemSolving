#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll t; cin >> t;// while(t--)
    for(int i=1 ; i<=t ;i++)
    {
        cout << "Case " << i <<":" << endl;
         int n , q;
         cin >> n >> q;
         int a[n];
         for(int j=0 ; j <  n ; j++) cin >> a[j];
         while(q--)
         {
             int l,r;
             cin >> l >> r;
             int* x = lower_bound(a,a+n,l);
             int* y = upper_bound(a,a+n,r);
             cout << y-x << endl;
         }

    }

    return 0;
}