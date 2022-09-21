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
        vector<int>v(n);
        for(int &i:v) cin >> i;
        int l,r;
        for(l=0; l<n-1 ; l++)
        {
            if(v[l]>v[l+1]) break;
        }
        for(r=n-1; r>0 ; r--)
        {
            if(v[r]>v[r-1]) break;
        }
        cout <<(r<=l ? "YES\n" : "NO\n");
    }

    return 0;
}
