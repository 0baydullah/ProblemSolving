#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    int X=0,Y=0,Z=0, x,y,z;

    while (n--)
    {
        cin >> x >> y >> z;
        X += x;
		Y += y;
		Z += z;
    }
     cout << ( X||Y||Z ? "NO" : "YES" );

    return 0;
}
