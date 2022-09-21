#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll t; cin >> t; for(int T = 1 ; T<=t ; T++)
    {
        int n ;cin >> n;
        int a[2*n];
        ll ans=0;
        for(int i=0 ; i<2*n ; i++)
            cin >> a[i];
        for(int i=1 ; i<2*n ; i+=2)
        {
            ans ^= a[i]-a[i-1]-1;
        }
        if(ans%2)
            cout << "Case " <<T << ": Alice\n";
        else{
             cout << "Case " <<T << ": Bob\n";
        }
    }

    return 0;
}
