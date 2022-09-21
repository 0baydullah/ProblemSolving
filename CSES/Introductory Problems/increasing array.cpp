#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

   // ll t; cin >> t; while(t--)
    {
        int n; cin >> n;
        int a[n];ll sum{0};
        for(int i=0 ; i<n ;i++) cin >> a[i];
        for(int i=1 ; i<n ;i++)
        {
            if(a[i]<a[i-1])
            {
                sum+=a[i-1]-a[i];
                a[i]=a[i-1];
            }
        }
        cout << sum;
    }

    return 0;
}
