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
    int a,b,c;
    cin >> a >> b >> c;
    int cnt=0;
    if(a&1) cnt++;
     if(b&1) cnt++;
      if(c&1) cnt++;
    if(cnt==1) cout << "yes" << endl;
    else if(cnt==2) cout << "yes" << endl;
    else cout << "no" << endl;
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