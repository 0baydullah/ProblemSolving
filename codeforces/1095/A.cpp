/// 1095 a
#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int n;cin >> n;
    string s; cin >> s;
    for(int i = 0 , x=0; i <= n-1 ; i++)
    {
        cout << s[i];
        i += x;
        x++;
    }

    return 0;
}
