#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

 //   ll t; cin >> t; while(t--)
    {
        ll n; cin >> n;
        for(ll i=1 ; i<=n ;i++)
            cout << (((i*i)*(i*i-1))/2)-(4*(i-1)*(i-2)) << endl;
    }
///https://www.youtube.com/watch?v=G6malZoGktY
    return 0;
}
