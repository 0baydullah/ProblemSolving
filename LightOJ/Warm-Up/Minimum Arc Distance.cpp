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
      cout << "Case " << t << ": ";
        double ox,oy,ax,ay,bx,by;
        cin >> ox>>oy>>ax>>ay>>bx>>by;
        double r,ab;
        r= sqrt(pow(ox-ax,2)+pow(oy-ay,2));
        ab= sqrt(pow(bx-ax,2)+pow(by-ay,2));
        double angle = acos(((r*r)+(r*r)-(ab*ab))/(2*r*r));
        cout << fixed << setprecision(8) << angle*r << endl;
    }

    return 0;
}