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
        int n , H, M;
        cin >> n >> H >> M;

        int sleep = H*60 + M;
        int ans = 24*60;

        for(int i=0 ; i<n ; i++)
        {
            int h , m;
            cin >> h >> m;

            m+=60*h;

            if(m >= sleep)
            {
                ans =min(ans,m-sleep);
            }
            else
            {
                ans = min(ans, m-sleep + 24 * 60);
            }
        }
        cout << ans/60 << " " << ans%60 << endl;
    }

    return 0;
}
