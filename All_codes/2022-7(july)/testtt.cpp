#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;


ll dp[6][30005],val[5]={50,25,10,5,1},n;

ll call(ll i , ll taken)
{
    if(i>=5)
    {
        if(taken==0) return 1;
        else return 0;
    }

    if(dp[i][taken] != -1) return dp[i][taken];
    ll a=0,b=0;
    if(taken-val[i] >= 0)
        a=call(i,taken-val[i]);
    b=call(i+1,taken);
    return dp[i][taken] = a+b;
}

int main()
{
   // ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    while((cin >> n ))
    {
        memset(dp,-1,sizeof(dp));
        ll fucking_answr = call(0,n);
        if(fucking_answr==1)
            printf("There is only 1 way to produce %lld cents change.\n",n);
        else  printf("There is only %lld way to produce %lld cents change.\n",fucking_answr,n);
    }

    return 0;
}
