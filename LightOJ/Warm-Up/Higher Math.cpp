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
        int a[3];
        cin >> a[0]>> a[1] >> a[2];
        sort(a,a+3);
        (a[0]*a[0])+(a[1]*a[1]) == a[2]*a[2] ? cout << "yes\n" : cout << "no\n";
    }

    return 0;
}