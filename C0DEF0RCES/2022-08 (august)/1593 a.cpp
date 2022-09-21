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
        ll n,k;
        cin >> n >> k;
        vector<ll>a(k);
        for(int i=0 ; i<k ; i++) cin >> a[i];
        sort(a.rbegin(),a.rend());
        ll cp=0;
        ll cnt=0;
        for(int i=0 ; i<k ; i++)
        {
            if(cp<a[i])
            {
                cp+=(n-a[i]);
                cnt++;
            } else break;
        }
        cout << cnt << endl;
    }

    return 0;
}
