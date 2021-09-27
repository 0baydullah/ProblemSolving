#include<bits/stdc++.h>
#define endl "\n"
 
typedef long long ll;
typedef unsigned long long ull;
 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
   // int t;cin >> t ;while (t--)
    {
        int n , m;
        cin >> n >> m;
        int a[n];int sum{0};
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        for(int i = 0 ; i < m ; i++)
        {
            if(a[i]<0)
            sum += a[i];
        }
        cout << abs(sum) << endl;
    }
}

