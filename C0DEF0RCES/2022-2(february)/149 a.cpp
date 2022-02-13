#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

  //  ll t; cin >> t; while(t--)
    {
        int k,cnt{0},sz{0}; cin >> k;
        int a[12];
        for(int i=0 ; i<12 ;i++) cin>> a[i];
        sort(a,a+12,greater<int>());
        for(int i=0 ; i<12 ; i++)
        {
            if((k<=sz))
            {
                break;
            }
            else{
                sz+=a[i];
                cnt++;
            }
        }

if (k<= sz) cout << cnt;
else cout<<-1;
    }

    return 0;
}
