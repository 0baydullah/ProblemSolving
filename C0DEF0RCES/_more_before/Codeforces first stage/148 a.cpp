#include <bits/stdc++.h>
using namespace std;

main()
{
    set <int> x;
    int k,l,m,n,d,xx{0};
    cin>> k>> l >> m >> n >> d;
    if(k==1 || l==1 || m==1 || n==1) {cout << d;return 0;}

    for (int i=1;xx<=d;i++)
    {
         xx = k*i;
        if (xx<=d)
        x.insert(xx);
    }xx=0;

    for (int i=1;xx<=d;i++)
    {
         xx = l*i;
        if (xx<=d)
        x.insert(xx);
    }xx=0;

    for (int i=1;xx<=d;i++)
    {
         xx = m*i;
        if (xx<=d)
        x.insert(xx);
    }xx=0;

    for (int i=1;xx<=d;i++)
    {
         xx = n*i;
        if (xx<=d)
        x.insert(xx);
    }

    cout << x.size();
    return 0;

}
