#include<bits/stdc++.h>
 
#define endl "\n"
 
typedef long long ll;
typedef unsigned long long ull;
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
 
    ll t; cin >> t; while(t--)
    {
        int n; cin >> n;
        int a[n];
        for(int i=0; i<n ; i++) cin >> a[i];
        if(is_sorted(a,a+n)) cout << "NO"<<endl;
        else cout << "YES" << endl;
    }
 
    return 0;
}
