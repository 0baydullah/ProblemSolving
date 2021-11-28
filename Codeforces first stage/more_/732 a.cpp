#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int p,s{1},x, c;
    cin >> p >> c ;
    for (s=1;;s++)
    {
        x= s*p;
        if(x%10==0 || (x-c)%10==0) break;
    }
    cout << s;

    return 0;
}
