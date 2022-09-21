#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
   // ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

 //   ll t; cin >> t; while(t--)
    {
        ll cat[]={1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796};
        ll n; bool key=0;
        while(cin >> n){
            if(key) cout << endl;
            cout <<  cat[n] << endl;
            key=1;
        }
    }

    return 0;
}
