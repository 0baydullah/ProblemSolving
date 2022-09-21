#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

   // ll t; cin >> t; while(t--)
   /// written by obaydullah
    {
        int n, K; cin >> n >> K;
        int a[n];
        for(int i=0 ; i<n ;i++) cin >> a[i];
        int cnt{0};


        for(int i=0 ; i<n-1 ;i++)
        {
            for(int j= i+1 ; j<n ; j++)
            {
                int mx=-1,mn=1e9;
                for(int k=i ; k<=j ; k++)
                {
                    mn=min(a[k],mn);
                    mx=max(a[k],mx);
                }
                if(mx-mn==K) cnt++;
            }
        }
        cout << cnt;
    }

    return 0;
}
