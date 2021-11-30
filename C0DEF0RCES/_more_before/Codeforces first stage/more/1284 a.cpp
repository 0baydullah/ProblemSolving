#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll n, m;
    cin >> n >> m;
    ll N=n, M=m;
    vector <string> s,t;
    while(n--){string x ; cin >> x; s.push_back(x);}
    while(m--){string y ; cin >> y; t.push_back(y);}
    ll Q;cin >> Q;
    while(Q--)
    {
        ll q;cin>> q;
        ll a = ((q%N)-1);
        if (a==-1) a=N-1;
        ll b = ((q%M)-1);
        if (b==-1) b=M-1;
        cout << s[a] << t[b] << endl;
    }

    return 0;
}
