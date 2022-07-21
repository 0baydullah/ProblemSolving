#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int n;
int coin[]={1,5,10,25,50};
int dp[6][1001];

int change(int i, int amount)
{
    if(i>=5)
    {
        if(amount==n) return 1;
        else return 0;
    }
    if(dp[i][amount]!=-1) return dp[i][amount];
    int res1=0,res2=0;
    if(amount+coin[i]<=n)
        res1 = change(i,amount+coin[i]);
    res2 = change(i+1,amount);
    return dp[i][amount] = res1+res2;
}

int main()
{
   // ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    while(cin >> n)
    {
        memset(dp,-1,sizeof(dp));
        int ans = change(0,0);
        if(ans==1) printf("There is only 1 way to produce %d cents change.\n",n);
        else  printf("There is %d way to produce %d cents change.\n",ans,n);
    }

    return 0;
}
