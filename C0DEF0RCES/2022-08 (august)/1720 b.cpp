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
        vector < int >  v(n);
        for(int i=0 ; i<n; i++) cin >> v[i];
        sort(v.begin(),v.end());
        cout << v[n-1]+v[n-2]-v[0]-v[1] << endl;
    }

    return 0;
}
