#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    map <string,int> m;

    while(n--)
    {
        string s;
        cin >> s;
        if(m[s]==0) cout << "OK" << endl;
        else cout << s << m[s] <<fuckl;
        m[s]++;
    }

    return 0;
}
