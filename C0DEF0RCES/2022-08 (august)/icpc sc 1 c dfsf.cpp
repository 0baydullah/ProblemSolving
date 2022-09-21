#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back
 #define pi acos(-1.0)

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll t; cin >> t; for(int i=1 ; i<=t;i++)
    {
        long double r; cin >> r;
        long double  tr=r/2;
        long double tc12 =pi*tr*tr;
        long double sr=sqrt(r*r+r*r)/2;
        long double sh14 = sr*sr*(pi-2)/4;
        long double ans = (pi*tr*tr)-sh14;
        printf("Case %d: %.4Lf\n",i,ans);


    }

    return 0;
}
