#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll MOD=1000003;
ll BigMod(ll B, ll P ){
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
    string s; cin>> s;
    string a="";


    for(int i=0 ; i<s.size() ; i++){
        if(s[i]=='>') a+="1000";
        if(s[i]=='<') a+="1001";
        if(s[i]=='+') a+="1010";
        if(s[i]=='-') a+="1011";
        if(s[i]=='.') a+="1100";
        if(s[i]==',') a+="1101";
        if(s[i]=='[') a+="1110";
        if(s[i]==']') a+="1111";
    }

    reverse(a.begin(),a.end());
    ll ans=0;
    for(int i=0 ; i<a.size() ; i++){
        if(a[i]=='1'){
            ans+=BigMod(2,i)%MOD;
            ans %= MOD;
        }
    }
    cout << ans <<endl;
}
