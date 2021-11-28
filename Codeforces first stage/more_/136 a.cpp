#include <bits/stdc++.h>
using namespace std;

main()
{
    int n;cin >> n;
    int a[1000],i,x;

    for ( i=1 ; i<=n ;i++)
    {
        cin >> x;
        a[x]=i;
    }
    for (i=01 ; i<=n ;i++)
    {
        cout<<a[i]<<" ";
    }

}
