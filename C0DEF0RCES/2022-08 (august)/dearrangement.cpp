#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

ll d(ll n)
{
    if(n==1)return 0;
    if(n==2 ) return 1;
    else return d(n-1)*(d(n-1)+d(n-2));
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

  //  ll t; cin >> t; while(t--)
    {
        cout <<(ll) d((ll)7) << endl;
    }

    return 0;
}
