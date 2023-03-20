#include "bits/stdc++.h"
#define endl "\n"
#define ll long long
using namespace std;

ll POW(ll b, ll p){
    ll r{1};
    while(p){
        if(p&1){
            r*=b;
            p--;
        }
        else{
            b*=b;
            p/=2;
        }
    }
    return r;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int base , power;
    cin >> base >> power;

    cout << POW(base,power) << endl;

    return 0;
}