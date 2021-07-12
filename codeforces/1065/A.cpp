#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll s, a, b, c, total{0};
        cin >> s >> a >> b >> c;
        ll candy = s/c;
        ll free_candy = candy/a*b;
        cout << candy+free_candy << endl;;
    }
    return 0;
}
