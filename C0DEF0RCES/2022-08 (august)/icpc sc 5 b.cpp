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

    ll t; cin >> t;  for(int i=1 ; i<=t;i++)//while(t--)
    {
        double m,d;cin >> m >> d;
        double v=m/d;
        long double r=cbrt(3*v/4/pi);
       // cout<<fixed<<setprecision(4)<<
       long double ans = 4*pi*r*r ;//<< endl;
               printf("Case %d: %.4Lf\n",i,ans);

    }

    return 0;
}
