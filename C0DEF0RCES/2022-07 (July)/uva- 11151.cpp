#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

string s;
int dp[1000][1000];
int pal(int l, int r)
{
    int ans;
    if(l>r)return 0;
    if(l==r) return 1;
    if(dp[l][r]!=-1)return dp[l][r];
    if(s[l]==s[r]) ans = 2 + pal(l+1,r-1);
    else ans = max(pal(l,r-1),pal(l+1,r));
    return dp[l][r]=ans;
}
int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll t; cin >> t; string avoid; getline(cin,avoid);
    if(t==0) cout << 0 << endl;
     while(t--)
    {
        memset(dp,-1,sizeof(dp));
        getline(cin,s);
    //  cin >> s;
        int sz=s.length();
        cout << pal(0,sz-1) << endl;
    }

    return 0;
}
