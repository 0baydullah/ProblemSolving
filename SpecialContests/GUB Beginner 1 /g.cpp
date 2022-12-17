#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        int n, h; cin >> n >> h;
        int a[n];
        for(int i=0 ; i<n; i++) cin >> a[i];
        sort(a,a+n,greater<int>());
        bool flag=1;
        int cnt{0};
        int pow = a[0]+a[1];
        cnt = (h/pow)*2;
        int rem = h%pow;
        if(rem)
            if(rem>a[0]) cnt+=2;
            else cnt++;
        cout << cnt << endl;
    }

    return 0;
}