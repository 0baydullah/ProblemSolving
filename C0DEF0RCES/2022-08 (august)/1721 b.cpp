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
    int n,m,a,b,d;
    cin >> n >> m >> a >> b >> d;
    int s= abs(a-n)+abs(b-m);
    if(s<=d) cout << -1 << endl;
    else if(a+d>=n and b+d >= m)
        cout << -1 << endl;
    else if(a-d<=1 and b-d <= 1)
        cout << -1 << endl;
    else cout << abs(1-n)+abs(1-m)<< endl;
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