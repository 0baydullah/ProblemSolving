#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int a,b,dp[300][300];


int cut(int a, int b)
{
    if(a>b)swap(a,b);
    if(b==1)return 0;
    if(dp[a][b]!=-1) return dp[a][b];
    return dp[a][b] = 1+cut(a,b/2)+cut(a,b-b/2);
}
/**
    its a simple O(1) problem
    just printing a*b-1
    but i try to apply dp here
*/
int main()
{
   // ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
     while(cin >> a >> b)
     {
        memset(dp,-1,sizeof(dp));
        cout << cut(a,b) << endl;
     }

    return 0;
}
