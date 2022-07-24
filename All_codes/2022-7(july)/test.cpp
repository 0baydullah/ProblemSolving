#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

#define SZ 1005

int dp[SZ][SZ];

char s[SZ];

int solve(int i,int j)
{
    if(i>j )return 0;

    if(i==j)return 0;

    int &ret=dp[i][j];

    if(ret!=-1)return ret;

    if(s[i]==s[j]) ret=solve(i+1,j-1);

    else ret=min(solve(i,j-1),solve(i+1,j))+1;

    return ret;
}

string ans;

void printSolution(int i,int j)
{
    if(i>j)return ;

    if(s[i]==s[j])
    {
        ans.pb(s[i]);
        printSolution(i+1,j-1);
        if(i!=j)ans.pb(s[j]);
    }
    else if(solve(i,j)==solve(i+1,j)+1)
    {
        ans.pb(s[i]);
        printSolution(i+1,j);
        ans.pb(s[i]);
    }
    else if(solve(i,j)==solve(i,j-1)+1)
    {
         ans.pb(s[j]);
         printSolution(i,j-1);
         ans.pb(s[j]);
    }
}
int main()
{

    int i,t,cs=1;
    while(cin>>s)
    {
        ans.clear();
        memset(dp,-1,sizeof dp);
        printf("%d ",solve(0,strlen(s)-1));
        printSolution(0,strlen(s)-1);
        cout<<ans;
        cout<<endl;
    }
    return 0;
}
