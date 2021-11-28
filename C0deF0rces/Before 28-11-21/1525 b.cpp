#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int t; cin >> t ;
    while (t--)
    {
        int n; cin >> n ; int a[n];
        for(int i=0 ; i<n ; i++)
        {
            cin >> a[i];
        }
        if(is_sorted(a,a+n)) cout << 0 << endl;
        else if(a[n-1] == n || a[0] == 1) cout << 1 << endl;
        else if(a[n-1] == 1 && a[0] == n) cout << 3 << endl;
        else cout << 2 << endl;
    }
    return 0;
}
