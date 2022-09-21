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
        int a , b , c;
        cin >> a >> b >> c;
        int sum = a+b+c;
        if(sum%9==0 and min({a,b,c})>= sum/9) cout << "YES\n";
        else cout << "NO\n";

    }

    return 0;
}
