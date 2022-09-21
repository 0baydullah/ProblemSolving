#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    //ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
    ll n;
    while(cin >> n)
    {
        ll p=1,cnt{0};
        for(int i=1 ; i<100 ; i++)
        {
            p*=9;
            cnt++;
            if(p>=n)
                break;
        }
       // cout << x << endl;
        if(cnt%2==0) cout << "Ollie wins." << endl;
        else cout << "Stan wins." << endl;
    }

    return 0;
}
