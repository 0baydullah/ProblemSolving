#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back
#define srt(s)  sort(s.begin(),s.end())
#define rsrt(s)  sort(s.rbegin(),s.rend())
#define rev(v)    reverse(v.begin(),v.end())
#define all(x)   x.begin(),x.end()
#define getbit(n, i) (((n) & (1LL << (i))) != 0)
#define setbit0(n, i) ((n) & (~(1LL << (i))))
#define setbit1(n, i) ((n) | (1LL << (i)))
#define togglebit(n, i) ((n) ^ (1LL << (i)))
#define lastone(n) ((n) & (-(n)))
#define ff first
#define ss second

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int n; cin >> n;
    int mn=1e9+9;
    vector<pair<int,string>> v;
    for(int i=0 ; i<n; i++){
        string x;int y;
        cin >> x >> y;
        v.pb({y,x});
        mn=min(y,mn);
    }
    int flag=0;
    for(auto x : v){
        if(x.ff==mn)flag=1;
        if(flag) cout << x.ss << endl;
    }
    for(auto x : v){
        if(x.ff==mn)flag=0;
        if(flag) cout << x.ss << endl;
    }

    return 0;
}