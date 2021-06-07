#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

long long int t;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    long long int n,m,cp=1,i,j;
    cin >> n >> m;
    int a[m+1];
    for(j=1 ; j<=m ; j++) cin >> a[j];
    for( i=1 ; i<=m ; i++)
    {
        if(a[i]<cp)
        {
            t += n -(cp - a[i]);
            cp = a[i];
        }
        else if(a[i]>cp)
        {
            t += a[i]-cp;
            cp = a[i];
        }
        else cp = a[i];

    }

    cout << t << fuckl;

    return 0;
}
