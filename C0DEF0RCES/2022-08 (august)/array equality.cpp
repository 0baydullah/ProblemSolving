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
        int n ; cin >> n;
        map<int,int>m;
        int a[n];
        for(int i=0 ; i<n ;i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        int key=1;
        if(n&1)
            for(auto x : m)
            {
                if(x.second > n/2+1)
                {
                    cout << "NO\n";
                    key=0;
                }
            }
        else
            for(auto x : m)
            {
                if(x.second > n/2)
                {
                    cout << "NO\n";
                    key=0;
                }
            }
        if(key) cout << "YES\n";

    }

    return 0;
}
