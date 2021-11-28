#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    int a[n],b[m];
    for(int i=0 ; i< n ; i++) cin >> a[i];
    for(int i=0 ; i< m ; i++) cin >> b[i];
    sort(a,a+n);sort(b,b+m);
    a[n-1] < b[0] ? cout << a[n-1] : cout << -1;

    return 0;
}
