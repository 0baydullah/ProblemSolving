#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define ll long long
#define ull unsigned long long

using namespace std;

vector<int>factors;

void PrimeFact(int n){
    for(int i=2 ; i*i <= n ; i++){
        if(n%i==0){
          //  int cnt=0 ; // for counting same factors
            while(n%i==0){
              //  cnt++;  // for counting same factors
                n/=i;
            }
            factors.pb(i);
            // cout << i << "^" << cnt << ", ";  // if not want to store and direct print 
        }
    }
    if(n>1) factors.pb(n);
    // if(n>1) cout << n << "^" << 1 << endl;  // if not want to store and direct print 
    // else cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int n; cin >> n;
    PrimeFact(n);
    cout << "Prime Factors of " << n << " is : ";
    for(auto x : factors)
        cout << x << " ";
    cout << endl;

    return 0;
}