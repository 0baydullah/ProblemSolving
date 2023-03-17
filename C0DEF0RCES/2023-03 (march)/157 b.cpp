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

    int n; cin >> n;
    int a[n];
    for(int i=0 ; i<n; i++){
        cin >> a[i];
    }
    sort(a,a+n,greater<int>());
    long double red=0,blue=0;
    for(int i=0 ; i<n; i++){
        if(~i&1){
            red+=PI*a[i]*a[i];
        }else blue +=PI*a[i]*a[i];
    }
    cout << fixed << setprecision(9) << red-blue <<endl;

    return 0;
}