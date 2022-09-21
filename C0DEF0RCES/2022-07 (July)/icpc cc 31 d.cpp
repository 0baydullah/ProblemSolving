#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

//    ll t; cin >> t; while(t--)
    {
        ll s, c; cin >> s >> c;
        ll pre = min(s,c/2);
        ll store;
        if(c-(pre*2) >0)
        {
            store = (c-(pre*2))/4;
        }
        cout << pre+store << endl;
    }

    return 0;
}
