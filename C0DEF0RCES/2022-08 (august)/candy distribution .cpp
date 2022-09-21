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
        int n,m; cin >>n >> m;
        if(n%m==0 and (n/m)%2==0)
            cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}
