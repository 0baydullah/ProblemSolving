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
          int ax ,bx,cx ,dx,ay,by,cy,dy;
          cin >> ax>>ay>>bx>>by>>cx>>cy;
          dx =   ax + cx -bx;
          dy =   ay + cy -by;

          //  int a = 0.5*(((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dy)+(dy*ax)));

           int a = 0.5*(((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax)));


          cout << dx << " " << dy << " " << abs(a) << endl;
    }

    return 0;
}