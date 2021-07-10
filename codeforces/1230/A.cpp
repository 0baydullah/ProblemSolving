#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int a, b , c , d;
    cin >> a >> b >> c >> d;
    int total = (a+b+c+d);
    if(total%2){ cout << "NO"; return 0; }
    if (a+b == c+d || a+c == b+d || a+d == b+c || a+b+c == d || b+c+d == a || c+d+a == b || d+a+b == c) cout << "YES" ;
    else cout << "NO";

    return 0;
}
