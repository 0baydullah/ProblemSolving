#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int x, y , z ,Z;
    cin >> x >> y >> z >> Z;
    int m = max(x,y);
    int n = max(z,Z);
    int o = max(m,n);

    if(o-z)cout << o-z << " ";
    if(o-y)cout << o-y << " ";
    if(o-x)cout << o-x << " ";
    if(o-Z)cout << o-Z << " ";

    ///cout << o-z << " " << o-y << " " << o-x << endl;


    return 0;
}
