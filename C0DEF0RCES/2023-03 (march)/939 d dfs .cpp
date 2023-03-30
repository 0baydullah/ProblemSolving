#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back
#define all(v) v.begin(),v.end()
#define sort(s)  sort(s.begin(),s.end())
#define rsort(s)  sort(s.rbegin(),s.rend())
#define rev(v)    reverse(v.begin(),v.end())

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

vector<int>g[30];
bool vis[30]={0};
vector<pair<char,char>>p;

void dfs(int u){
    vis[u]=1;
    for(auto x:g[u]){
        if(!vis[x]){
            p.pb({'a'+u,'a'+x});
            dfs(x);
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int n; string s,t;
    cin >> n >> s >> t;
    for(int i=0 ; i<n; i++){
        g[s[i]-'a'].pb(t[i]-'a');
        g[t[i]-'a'].pb(s[i]-'a');
    }

    for(int i=0; i<26; i++)
        if(!vis[i]) dfs(i);

    cout << p.size() << endl;
    for(auto x: p){
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}