#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int t;cin>> t;
    while(t--)
    {
        int n;cin >> n;
        int one{0},two{0};
        while(n--)
        {
            int x;cin >>x;
            x==1 ? one++ : two++;
        }
        if(two+two==one) cout << "YES" << endl;
        else if (one%2==0 && two%2==0)  cout << "YES" << endl;
        else if (one%2==0 && two%2!=0 && one != 0)  cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
