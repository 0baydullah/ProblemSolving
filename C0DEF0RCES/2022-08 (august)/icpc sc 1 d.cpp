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
        int n , q; cin >> n >> q;
        int cnt{0};
        int a[n+1];
        vector<int>ss(n+1,0);
        for(int i=1 ; i<=n ;i++) cin >> a[i];
        map<int,int>m;
        while(q--)
        {
            int x; cin >> x;
            ss[x]++;
        }

        for(int i=n-1 ; i>0 ;i--)
        {
            ss[i] += ss[i+1];
        }
        for(int i=1 ; i<=n ;i++)
        {
            if(a[i]-ss[i] <=0) cnt ++;
        }
        //for(auto u:ss)
      //      cout << u << " ";
        cout << cnt << endl;
    }

    return 0;
}
