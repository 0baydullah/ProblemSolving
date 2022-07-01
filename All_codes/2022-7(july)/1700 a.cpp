#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll t; cin >> t; while(t--)
    {
        int i , j; cin >> i >> j;
        ll sum = j*(j+1)/2;
        for(int I=2 ; I<=i ; I++)
        {
            sum+=j*I;
        } cout << sum << endl;
    }

    return 0;
}
