#include<bits/stdc++.h>
#define endl "\n"
 
typedef long long ll;
typedef unsigned long long ull;
 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t ;
    while (t--)
    {
        int n , a , b;
        cin >> n >> a >> b;
        for(int i = 0 ; i < n ; i++)
        {
            char x ='a'+(i%min(26,b));
            cout << x;
        }
        cout << endl;
    }
}
