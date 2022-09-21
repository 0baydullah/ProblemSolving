#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

void WiredAlgo(ll n)
{
    if(n==1) return;
    if(n&1)
    {
        cout << n*3+1 << " ";
        WiredAlgo(n*3+1);
    }
    else
    {
        cout << n/2 << " ";
        WiredAlgo(n/2);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

  //  ll t; cin >> t; while(t--)
    {
        ll n; cin >> n;
        cout << n << " ";
        WiredAlgo(n);
    }

    return 0;
}
