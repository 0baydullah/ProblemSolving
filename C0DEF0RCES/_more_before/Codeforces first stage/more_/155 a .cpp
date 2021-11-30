#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n,x,s,b,y,cnt{0};
    cin >> n >> x;
    n--;
    s=x;
    b=x;

    while (n--)
    {
        cin >> y;
        if(y>b)
        {
            b=y;
            cnt++;
        }
        else if (y<s)
        {
            s=y;
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}
