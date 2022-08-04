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
        int n,m; cin >> n >> m;
        int a[n];
        for(int i=0 ; i<n ; i++)
            cin >> a[i];
        vector <int> degree(n,0);
        int pair = INT_MAX;
        for(int i=0 ; i<m ; i++)
        {
            int x,y;
            cin>> x >> y;
            degree[x-1]++;
            degree[y-1]++;
            pair=min(pair,a[x-1]+a[y-1]);
        }
        if(!(m&1))
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            int ans=pair;
            for(int i=0 ; i<n ; i++)
                if(degree[i]%2!=0)
                    ans = min(ans,a[i]);
            cout << ans << endl;
        }
    }

    return 0;
}
