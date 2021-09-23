/// 831 b.cpp
#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    string a , b ,s ;
    cin >> a >> b >> s;
    map < char, char> m;
    for(int i = 0 ; i < 26 ; i++)
    {
        m[a[i]] = b[i];
    }


        for(int i=0 ; i<s.size(); i++)
        {
            if(s[i] >= '0' && s[i] <= '9' ) cout << s[i];
            else if(s[i] >= 'A' && s[i] <= 'Z')
            {
                char x = tolower(s[i]);
                char y = m[x];
                cout << (char) toupper(y);
            }
            else cout << m[s[i]];
        }
    return 0;
}