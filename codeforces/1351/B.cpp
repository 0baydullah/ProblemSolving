#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        int a, b , c, d;
        cin >> a >> b >> c >> d;
        cout<<(max(a,b)==max(c,d)&&max(a,b)==min(a,b)+min(c,d)?"YES\n":"NO\n");
    }

    return 0;
}
