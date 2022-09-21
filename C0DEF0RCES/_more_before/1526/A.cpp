#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int a[2*n];

        for(int i=0 ; i<2*n ; i++)
        {
            cin >> a[i];
        }

        sort(a,a+2*n);

        for(int i=0 , j=2*n-1 ; i<n ; i++,j--)
        {
            cout << a[i] << " " << a[j] << " ";
        }
        cout << fuckl;

    }    return 0;
}
