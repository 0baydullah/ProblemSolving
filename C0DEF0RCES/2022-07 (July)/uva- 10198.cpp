#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

ll n,dp[10][10001],val[4]={1,2,3,4};

ll call(int i , int taken)
{
    ll ret1=0,ret2=0;
    if(i>=4)
    {
        if(taken==0) return 1;
        else return 0;
    }
    if(dp[i][taken] != -1) return dp[i][taken];
    if(val[i]==4)
    {
        if(taken-1>=0 ) ret1=call(i,taken-1);
    }

    if(taken-val[i]>=0) ret1=call(i,taken-val[i]);
    ret2=call(i+1,taken);
    return dp[i][taken] = ret1+ret2;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    while(cin >> n)
    {
        memset(dp,-1,sizeof(dp));
        cout << call(0,n) << endl;
    }

    return 0;
}
