#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
    
    int n; cin >> n;
    while (n--)
    {
        int t;
        cin >> t;
        cout << t << " ";
        for(int i = 1 ; i<t ; i++) cout << i << " ";
        cout << endl;
    }
    
    return 0;
}