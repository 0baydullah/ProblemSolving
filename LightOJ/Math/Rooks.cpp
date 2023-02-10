#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;


ll dp[35][35];
ll fact[20];


ll ncr(int n,int r){
    if(n==r || r==0)return 1;
    else if(r==1)return n;
    else if(dp[n][r]!=(-1))return dp[n][r];
    dp[n][r]=ncr(n-1,r)+ncr(n-1,r-1);
    return dp[n][r];

}


int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    memset(dp,-1,sizeof(dp));

    fact[0]=fact[1]=1;
    for(int i=2 ; i<=20 ; i++) fact[i]=fact[i-1]*i;

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
      cout << "Case " << t << ": ";
        int n, k; cin >> n >> k;
        ll ans{0};
        if(n>=k)
            ans=ncr(n,k);
        cout << ans*ans*fact[k] << endl;

    }

    return 0;
}