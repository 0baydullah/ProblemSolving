#include<bits/stdc++.h>
 
#define endl "\n"
 
typedef long long ll;
typedef unsigned long long ull;
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
 
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        if(n<3){
            cout << 0 << endl;
            continue;
        }
        if(n/2 == n-n/2) cout << n/2-1 << endl;
        else cout <<(n- n/2)-1 << endl;
    }
 
    return 0;
}