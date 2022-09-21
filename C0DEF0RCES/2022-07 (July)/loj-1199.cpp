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
        int ans=0;
        while(n--)
        {
            int x; cin >> x;
            ans ^=x;
        }
        cout << "Case " << T << ": ";
        ans==0 ? cout << "Alice\n" : cout << "Bob\n";
    }

    return 0;
}
