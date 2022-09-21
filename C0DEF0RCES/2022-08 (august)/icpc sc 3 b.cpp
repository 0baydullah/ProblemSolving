#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

  //  ll t; cin >> t; while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        map <int,int> cnt;

        for(int i=0 ; i<n ; i++)
        {
            cin >> a[i];
            cnt[a[i]]++;
        }
        int ans = 0;
        for(int i=0 ; i<n ; i++)
        {
            ans = max(ans,cnt[a[i]]);
        }
            cout << ans;
        }

    return 0;
}
