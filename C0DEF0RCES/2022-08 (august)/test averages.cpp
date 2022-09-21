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
        int a,b,c; cin >> a >> b >> c;
        if((a+b)/2<35 or (c+b)/2<35 or (a+c)/2 <35  )
            cout << "Fail\n";
        else cout << "Pass\n";
    }

    return 0;
}
