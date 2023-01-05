#include<bits/stdc++.h>
#define ll long long
using namespace std;



    /// Calculate B^P%M where all are 64 bit integer


ll BigMod(ll B, ll P , ll MOD){
    ll R=1;
    while(P>0){
        if(P&1)
            R=(R*B)%MOD;
        P/=2;
        B=(B*B)%MOD;
    }
    return R;
}


int main(){
    
    ll B,P,MOD;
    while(cin >> B >> P >> MOD){
    cout << BigMod(B,P,MOD) << endl;}
    return 0;
}