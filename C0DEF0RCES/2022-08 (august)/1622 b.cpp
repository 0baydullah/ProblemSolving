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
        int n; cin >> n;
        int a[n];
        for(int i=0 ; i<n ;i++)
            cin >> a[i];
        string s; cin >> s;

        vector<pair<ll,ll>>x,y;
        for(int i=0 ; i<n ; i++)
            if(s[i]=='1')x.pb({a[i],i});
            else y.pb({a[i],i});

        sort(x.begin(),x.end(),greater<pair<ll,ll>>());
        sort(y.begin(),y.end(),greater<pair<ll,ll>>());


        ll ans[n],cnt=n;
        for(ll i=0 ; i<x.size() ; i++)
            ans[x[i].second]=cnt--;
        for(ll i=0 ; i<y.size() ; i++)
            ans[y[i].second]=cnt--;
        for(auto x: ans) cout << x << " ";
        cout << endl;
    }

    return 0;
}
