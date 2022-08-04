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
        map<int,int> m;
        int a[n];
        int ans{0};
        for(int i=0 ; i<n ; i++) cin >> a[i];
        for(int i=n-1,j=0 ; i>=0 ; i--,j++)
        {
            m[a[i]]++;
            if(m[a[i]]==2)
            {
                ans =n-j;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
