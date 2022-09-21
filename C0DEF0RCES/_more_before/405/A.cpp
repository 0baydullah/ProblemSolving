#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0 ; i<n ; i++)
    {
        cin >> a[i] ;
    }
    sort(a,a+n);
    for (int i = 0 ; i<n ; i++)
    {
        cout << a[i] << " " ;
    }

    return 0;
}
