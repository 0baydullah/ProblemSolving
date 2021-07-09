#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ull n,t,N;
    cin >> n >> t; N = n-1;
    if(n==1 && t==10){cout << -1 << endl; return 0;}
    if(t==10)
    {
        cout << 1;
        while(N--) cout << 0;
        return 0;
    }
    else
        while(n--) cout << t;
    return 0;
}
