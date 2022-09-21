#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll t; cin >> t; for(int T=1 ; T<=t ; T++)
    {
        int n; cin >> n;
        ll sum{0};
        int s=0;
        for(int i=0 ; i<n ; i++)
        {
            int x; cin >> x;
            sum^=x;
            s+=x;
        }
        cout << "Case " << T << ": ";
        if(s==n)
        {
            if(n%2) cout << "Bob\n";
            else cout << "Alice\n";
        }
        else
        {
            if(sum) cout << "Alice\n" ;
            else cout << "Bob\n";
        }

    }

    return 0;
}
