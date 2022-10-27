#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

void miryoku()
{
    int n,l;
    cin >> n  >> l;
    int a[n];
    for(int i=0 ; i<n ; i++) cin >> a[i];
//    a[n+1]=l;
    sort(a,a+n);
    int mx = 2*max(a[0],l-a[n-1]);
    for(int i=1 ; i<n ; i++){
        int x= a[i]-a[i-1];
        mx=max(mx,x);
    }
    cout <<fixed << setprecision(9) << mx/2.0<< endl;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
  //  cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        miryoku();
    }

    return 0;
}