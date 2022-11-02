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
    double r , x1  ,y1 , x2 ,y2;
    cin >> r >>x1>>y1>>x2>>y2;
    cout << (int) ceil(sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))/(2.000*r)) <<endl;
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