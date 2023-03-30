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

ll parent[30];
vector<pair<char,char>> ans;

ll rep(ll x){
    return (parent[x]==x?x:parent[x]=rep(parent[x]));
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int n;
    string x,y; cin >> n >> x >> y;
    for(int i=0 ; i<26 ; i++) parent[i]=i;
    for(int i=0 ; i<n; i++){
        int a=x[i]-'a';
        int b=y[i]-'a';
        if(rep(a)!=rep(b)){
            parent[rep(a)]=rep(b);
            ans.pb({x[i],y[i]});
        }
    }

    cout << ans.size() << endl;
    for(auto i : ans) cout << i.first << " "<< i.second <<endl;


    return 0;
}