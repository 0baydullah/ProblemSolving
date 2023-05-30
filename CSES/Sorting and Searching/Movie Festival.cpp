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

#define vpi vector<pair<int,int>>

using namespace std;

bool cmp(pair<int,int> x,pair<int,int> y){
    return x.ss < y.ss;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int n; cin >> n;
    vpi v;int tmp,ans;
    for(int i=0 ; i<n; i++){
        int x,y; cin >> x >> y;
        v.pb({x,y});
    }
    sort(all(v),cmp);
    
    tmp=ans=0;
    for(auto x:v){
        if(tmp<=x.ff){
            ans++;
            tmp=x.ss;
        }
    }
    cout << ans << endl;

    return 0;
}