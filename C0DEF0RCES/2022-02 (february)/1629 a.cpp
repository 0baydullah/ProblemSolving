#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

bool cmp(pair<int,int> &p1 , pair<int,int> &p2)
{
    if(p1.first < p2.first) return 1;
    if(p1.first == p2.first && p1.second > p2.second) return 1;
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll t; cin >> t; while(t--)
    {
        int n , k; cin >> n >> k;
        int a[n], b[n];
        for(int i=0 ; i<n ; i++) cin >> a[i];
        for(int i=0 ; i<n ; i++) cin >> b[i];
        vector<pair<int,int>>v;
        for(int i=0 ; i<n ; i++) v.push_back({a[i],b[i]});
        sort(v.begin(),v.end(),cmp);
        for(int i=0 ; i<n ; i++)
        {
            if(v[i].first <= k)
            {
                k += v[i].second;
            }
        }
        cout << k << endl;

    }

    return 0;
}
