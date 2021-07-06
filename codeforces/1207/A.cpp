#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t;cin >> t;
    while (t--)
    {
        int b,p,f,h,c;
        cin >> b >> p >> f >> h >> c;
        b = b/2; int ham,chick;
        int  burger = min(b,p+f);
        if(h>c)
        {
           ham = min(p,burger)*h;
           burger -= min(p,burger);
           chick = burger*c;
        }
        else
        {
            chick = min(f,burger)*c;
            burger -= min(f,burger);
            ham = burger*h;
        }
        cout << ham+chick <<fuckl;
    }

    return 0;
}
