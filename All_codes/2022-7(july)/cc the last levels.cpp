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
        int x,y,z;
        cin >> x >> y >> z;
        int br= ceil(x/3.00)-1;
        cout << x*y+br*z << endl;

    }

    return 0;
}
