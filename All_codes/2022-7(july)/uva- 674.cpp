#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;


int dp[5][7500],val[5]={50,25,10,5,1},n;

int call(int i , int taken)
{
    if(i>=5)
    {
        if(taken==0) return 1;
        else return 0;
    }

    if(dp[i][taken] != -1) return dp[i][taken];
    int a=0,b=0;
    if(taken-val[i] >= 0)
        a=call(i,taken-val[i]);
    b=call(i+1,taken);
    return dp[i][taken] = a+b;
}

int main()
{
   // ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
    memset(dp,-1,sizeof(dp));
    while((cin >> n ))
        printf("%d\n",call(0,n));
    return 0;
}
