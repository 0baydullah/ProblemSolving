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
    int a, b;cin >> a>>b;
    if(a<b) swap(a,b);
    if(b*2<a) cout << "NO"<<endl;
    else if(b*2==a) cout << "YES" << endl;
    else if((a%3==0 and b%3==0) or (a%3==2 and b%3==1) or (a%3==1 and b%3==2)) cout <<"YES" << endl;
    else cout << "NO" << endl;
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