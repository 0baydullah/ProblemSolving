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
        int n; cin >> n;
        int a[n+1];
        for(int i=0 ; i<n ; i++) a[i]=i+1;
        cout << n << endl;
        int s{1};
        for(int i=0 ; i<n ;i++)
        {
            for(int j=0 ; j<n ; j++)
            {
               cout << a[j] << " ";
            }
            cout << endl;
            swap(a[i],a[s++]);
        }
    }

    return 0;
}
