#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int x,y;
        cin >> x >> y;

        if(x==y)
            cout << x+y << fuckl;
        else if(x==0 || y==0)
            cout << max(x,y)*2-1 << fuckl;
        else if(x>y)
            cout << y*2+((x-y)*2-1) << fuckl;
        else if(x<y)
            cout << x*2+((y-x)*2-1) << fuckl;

    }

    return 0;
}
