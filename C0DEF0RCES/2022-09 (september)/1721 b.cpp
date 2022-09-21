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
    int n , m , sx,sy, d;
    cin >> n >> m >> sx >> sy >> d;
    
     int res=-1;
    if(abs(sy-1)>d && abs(sx-n)>d){res=n+m-2;}
    if(abs(sx-1)>d && abs(sy-m)>d){res=n+m-2;}
    cout << res << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        miryoku();
    }

    return 0;
}