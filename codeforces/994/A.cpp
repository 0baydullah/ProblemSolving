#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    int a[n] , b[m];
    for(int i=0 ; i<n ; i++) cin >> a[i] ;
    for(int j=0 ; j<m ; j++) cin >> b[j] ;

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(a[i]==b[j]) {cout << b[j] << " ";
            break;}
        }
    }

    cout << fuckl;

    return 0;
}
