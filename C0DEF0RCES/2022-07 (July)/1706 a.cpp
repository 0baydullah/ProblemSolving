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
        for(int i=0 ; i<n ; i++) cin >> a[i];
        string s;
        for(int i=0 ; i<m ; i++) s+='B';
        for(int i=0 ; i<n ;i++)
        {
            int x=min(a[i],m+1-a[i]);
            s[x+1]='A';
        }
        cout<< s << endl;
    }

    return 0;
}
