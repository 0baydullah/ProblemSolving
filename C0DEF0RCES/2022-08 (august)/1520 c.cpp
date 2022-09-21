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
        int N = n*n;
        if(n==1) cout << 1 << endl;
        else if(n==2) cout << -1 << endl;
        else
        {
            vector<int>v;
            for(int i=1 ; i<=N ; i+=2)
                v.pb(i);
            for(int i=2 ; i<=N ; i+=2)
                v.pb(i);
            int cntr=0;
            for(int i=0 ; i<n ;i++)
            {
                for(int j=0 ; j<n ; j++)
                {
                    cout << v[cntr] << " ";
                    cntr++;
                }cout << endl;
            }
        }
    }

    return 0;
}
