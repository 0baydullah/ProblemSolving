#include <bits/stdc++.h>
using namespace std;

main()
{
    int n, h;
    cin >> n >> h;
    int a[n] , w{0} , i;
    for( i==0 ; i<n ; i++)
    {
        cin >> a[i];
        if (a[i]>h)w++;
    }
    cout<< i+w;
}
