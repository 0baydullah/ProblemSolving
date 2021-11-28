#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    map <string, string> mp;
    while(n--)
    {
        string s1, s2;
        cin >> s1>> s2;
        mp[s2]=s1;
    }
    while(m--)
    {
        string a, b;
        cin >> a >> b;
        b.pop_back();
        cout << a <<" " <<b << "; #" << mp[b] << fuckl;
    }

    return 0;
}
