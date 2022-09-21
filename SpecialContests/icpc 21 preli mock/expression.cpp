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
    int _1, _2 , _3; cin >> _1 >> _2 >> _3;
    priority_queue<ll>x;
    ll y;
    y=_1+_2*_3;
    x.push(y);
    y=_1+_2+_3;
    x.push(y);
    y=_1*_2*_3;
    x.push(y);
    y=_1*_2+_3;
    x.push(y);
    y=_1*(_2+_3);
    x.push(y);
    y=_1+(_2*_3);
    x.push(y);
    y=(_1+_2)*_3;
    x.push(y);
    y=(_1*_2)+_3;
    x.push(y);
    y=(_1*_2)+_3;
    x.push(y);
    y=_1+(_2*_3);
    x.push(y);
    cout << x.top() << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
   // cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        miryoku();
    }

    return 0;
}

7 3 4
6 4 4
5 5 4
4 6 4
3 5 6
2 