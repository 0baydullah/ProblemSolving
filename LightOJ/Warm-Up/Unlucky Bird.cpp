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
    for(int tc=1 ; tc <= T ; tc++){
      cout << "Case " << tc << ": ";
        double v1,v2,v3,a1,a2,t1,t2,t3,d;
        cin >>v1>>v2 >> v3 >> a1 >> a2;
        t1=v1/a1;
        t2=v2/a2;
        t3=max(t1,t2);
        d=(v1*t1 - (.5*a1*t1*t1))+(v2*t2-(.5*a2*t2*t2));
        cout <<fixed << setprecision(6)<< d << " " << v3*t3 << endl;
    }

    return 0;
}