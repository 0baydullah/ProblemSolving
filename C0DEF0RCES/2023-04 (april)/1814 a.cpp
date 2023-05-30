#include "bits/stdc++.h"

#define endl "\n"
using namespace std;

#define ll long long

void code(){
    ll n,k; cin >> n >> k;
        if(n%2==0) cout << "YES" << endl;
        else{
            if(k==1)cout << "YES" << endl;
            else if(n==k) cout << "YES" << endl;
            else{
                if(n&1 and k&1 and k<n){
                    cout << "YES" << endl;
                }
                else cout << "NO" << endl;
            }
        }
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        code();
    }

    return 0;
}