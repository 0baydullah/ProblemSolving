#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

   // ll t; cin >> t; while(t--)
    {
        ll n; cin >> n;
        map<int,int>m;
        while(n--)
        {
            ll x; cin >> x;
            m[x]++;
        }
        int cnt{0};
        for(auto a:m)
        {
            if(a.second==1) cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}
