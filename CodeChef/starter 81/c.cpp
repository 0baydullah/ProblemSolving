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
        int n; cin >> n;
        int a[n];
        for(int i=0 ; i<n ;i++) cin >> a[i];
        int even=0,odd=0;
        for(int i=0 ; i<n ;i++)
            if(a[i]&1)odd++;
            else even++;
        if(odd &1 and odd!=n)cout << "NO\n";
        else cout << "Yes\n";
    }

    return 0;
}