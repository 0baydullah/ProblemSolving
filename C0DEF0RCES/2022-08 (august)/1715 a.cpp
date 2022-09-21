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
        int n, m; cin >> n >> m;
        if(n==1 && m==1)
        {
            cout << 0 << endl;
            continue;
        }
        if(m>n)swap(n,m);
        cout << n+m+m-2 << endl;
    }

    return 0;
}
