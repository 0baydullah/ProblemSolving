#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int diff=99999;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n, m,x=0;
    cin >> n >> m;
    int a[m];
    for(int i = 0 ; i<m ; i++)
        cin >> a[i];
    sort(a,a+m);
    for(int i = 0 ; i<=m-n ; i++)
    {
         x = 1;
        if((a[i+n-1] - a[i]) <diff)
            diff= a[i+n-1] - a[i];
    }
    if(x!=1)
        cout << "0";
    else
        cout << diff;

    return 0;
}
