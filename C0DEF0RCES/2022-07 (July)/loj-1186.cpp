#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;
int a[105],b[105];
int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll t; cin >> t; for(int i=1 ; i<=t ; i++)
    {
        int n; cin >> n;
        int ans=0;

        for(int j=1 ; j<=n ; j++) cin >> a[j];
        for(int j=1 ; j<=n ; j++)
        {
            cin >> b[j];
            ans^=(b[j]-a[j]-1);
        }
        if(ans==0) cout << "Case " << i << ": " << "black wins\n";
        else cout << "Case " << i << ": " << "white wins\n";
    }

    return 0;
}
