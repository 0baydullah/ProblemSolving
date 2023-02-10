#include "bits/stdc++.h"

#define endl "\n"

#define ll long long
#define ull unsigned long 
int mod = 1000000007;

using namespace std;


int main()
{
    ll fact[100009];
    fact[0]=1;
    fact[1]=1;
    for(int i=2 ; i<100001 ; i++) fact[i]=(i*fact[i-1])%mod;
    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
        int n;
        cin >> n; 

        cout << ((fact[n]%mod)*(n-1)%mod*n%mod)%mod<< endl;
    }

    return 0;
}