#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    //ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

   // ll t; cin >> t; while(t--)
    {
        int n; cin >> n;
        if(n==1){
            cout << 1; return 0;
        }
        else if(n<4)
        {
            cout << "NO SOLUTION" ; return 0;
        }
        else if(n==4) {printf("%d %d %d %d",3,1,4,2);return 0;}
        for(int i=1 ; i<=n ; i+=2)
            cout <<i << " ";
        for(int i=2 ; i<=n ; i+=2)
            cout <<i << " ";
    }

    return 0;
}
