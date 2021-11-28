
#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int n; cin >> n;
    int a[n];
    for(int i=0 ; i<n ; i++) cin >> a[i];
    sort(a,a+n);
    int sum{0};
    for(int i=0 ; i<n ; i++)
    {
        sum += a[i+1]-a[i];
        i++;
    }
    cout << sum;

    return 0;
}
