#include<bits/stdc++.h>
#define endl "\n"
 
typedef long long ll;
typedef unsigned long long ull;
 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
    int t;cin >> t ;while (t--)
    {
        int n;
        cin >> n ;
        int N=n,sum{n};
        while(N != 0 )
        {
           // sum += n;
            N=n/10;
            sum+=N;
            n=(n%10)+(n/10);
        }
        cout << sum<< endl;
    }
}

