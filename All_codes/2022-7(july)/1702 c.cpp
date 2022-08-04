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
        int n, k;
        cin >> n >> k;
        map<int,pair<int,int>>m;
        for(int i =0 ;i<n ;i++)
        {
            int x;
            cin >> x;
            if(!m.count(x))
            {
                m[x].first =i;
                m[x].second = i;
            }
            else m[x].second = i;
        }
        while(k--)
        {
            int l , r; cin >> l >> r;
            if(!m.count(l) or !m.count(r) or m[l].first > m[r].second)
                printf("NO\n");
            else printf("YES\n");
        }
    }

    return 0;
}
