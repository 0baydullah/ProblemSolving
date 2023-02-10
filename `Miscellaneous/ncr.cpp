#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll dp[35][35];

ll ncr(int n,int r){
    if(n==r || r==0)return 1;
    else if(r==1)return n;
    else if(dp[n][r]!=(-1))return dp[n][r];
    dp[n][r]=ncr(n-1,r)+ncr(n-1,r-1);
    return dp[n][r];

}

int main(){

    memset(dp,-1,sizeof dp);
    int test; cin>>test;
    while(test--){
        int n , r;
        cin >> n >> r;
        cout << ncr(n,r) << endl;
    }
    return 0;
}
