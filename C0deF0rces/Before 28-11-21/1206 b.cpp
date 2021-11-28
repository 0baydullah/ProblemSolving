#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll n  , cnt=0,coin{0},zero{0};
    cin >> n;
    while(n--)
    {
        ll x; cin >> x; if(x<0)  cnt++;

        if(x==0) zero ++;
        coin += min(abs(x-1),abs(x+1));
    }

    if(cnt%2 && zero) cout << coin ;
    else
    (cnt % 2) ? cout << coin +2 : cout << coin ;

    return 0;
}
