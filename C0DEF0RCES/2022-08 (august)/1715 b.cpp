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
        ll n,k,b,s;
        cin >> n >> k >> b >> s;
        if(k*b <= s)
        {
            ll lv = min(s,k*b+k-1);
            if(s-lv>((k-1)*(n-1)))
            {
                cout << -1 << endl;
                continue;
            }
            vector<ll>ans(n);
            ans[n-1]=lv;
            s-=lv;
            for(int i=n-2 ; i>=0 ; i--)
            {
                if(s==0) ans[i]=0;
                else if(s<=k-1)
                {
                    ans[i]=s;
                    s=0;
                }
                else if(s>k-1)
                {
                    ans[i]=k-1;
                    s-=(k-1);
                }
            }
            for(int i=0 ; i<n ;i++)
            {
                cout << ans[i] <<" ";
            }cout << endl;
        }
        else{
                cout <<-1 << endl;
                continue;
            }
    }

    return 0;
}
