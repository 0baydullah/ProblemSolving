#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    map <string,int> m;
    while (n--)
    {
        string s;
        cin >> s;
        m[s] == 0 ? cout << "NO\n" : cout << "YES\n";
        m[s] = 1;
    }

    return 0;
}
