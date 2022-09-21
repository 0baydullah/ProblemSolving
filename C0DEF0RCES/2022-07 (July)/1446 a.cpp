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
        ll n , w;
        cin >> n >> w;
        ll l = (w+1)/2;
        vector<pair<int ,int>> a;
        for(int i=0 ; i<n ;i++)
        {
            int x; cin >> x;
            a.pb({x,i});
        }
        sort(a.begin(),a.end());
        while(a.size() and a.back().first > w) a.pop_back();

        vector<int> ans;
        ll sum{0};
        while(a.size())
        {
            int x = a.back().first;
            sum+=x;
            ans.pb(a.back().second);
            a.pop_back();
            if(sum>=l) break;
        }
        if(sum<l)
        {
            cout << -1 << endl;
            continue;
        }
        cout << ans.size() << endl;
        for(auto u : ans) cout << u+1 << " ";
        cout << endl;
    }


    return 0;
}
