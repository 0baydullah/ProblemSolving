#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back
#define all(v) v.begin(),v.end()
#define srt(s)  sort(s.begin(),s.end())
#define rsrt(s)  sort(s.rbegin(),s.rend())
#define rev(v)    reverse(v.begin(),v.end())
#define all(x)   x.begin(),x.end()

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;






bool ok(int n , int m){
    if(n==m) return 1;
    else if(n%3 !=0 ) return 0;
    else return ok(n/3,m) or ok(2*n/3,m);
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    while(T--){
        int a,b; cin >> a >> b;
        cout << (ok(a,b) ? "YES\n" : "NO\n");
    }

    return 0;
}