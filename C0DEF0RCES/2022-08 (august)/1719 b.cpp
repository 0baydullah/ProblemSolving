#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll t; cin >> t; while(t--)
    {
        ll n , k;
        cin >> n >> k;
        ll x=n/2;
        vector<int> v;
        int key=1;

        for(int i=1 ; i<=n ;i+=2)
        {
            int a=i , b=i+1;
            if((a+k)*b %4==0){
                v.pb(a);v.pb(b);}
            else if((b+k)*a %4==0){
                v.pb(b);v.pb(a);}
            else{
                    cout << "NO\n";
                key=0;
                break;
            }
        }
        if(key)
        {
            cout << "YES\n";
            for(int i=0;i <v.size(); i+=2)
            {
                cout << v[i] << " " << v[i+1] << endl;
            }

            //for(auto u: v) cout << u << " ";
           // cout << endl;
        }
    }

    return 0;
}
