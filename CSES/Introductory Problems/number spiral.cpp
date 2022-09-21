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
        ll y,x;cin >> y >> x;
       if(y>x)
        {
            if(y&1) cout << (y-1)*(y-1) + 1 +x-1 <<endl;
            else cout << y*y -x+1 << endl;
        }
       else
        {
            if(x&1) cout << x*x -y+1 <<endl;
            else cout << (x-1)*(x-1) + 1 +y-1 <<endl;
        }
    }

    return 0;
}
