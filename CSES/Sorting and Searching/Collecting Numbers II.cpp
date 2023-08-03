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

    int n, q; cin >> n >> q;
    vector<int> v(n+1),pos(n+1);
    for(int i=1 ; i<=n; i++){
        cin >> v[i];
        pos[v[i]]=i;
    }
    int ans=1;
    for(int i=1 ; i<n; i++){
        ans+= pos[i]>pos[i+1];
    }
    int l,r;
    set<pair<int,int>> s;

    while(q--){
        cin >> l>> r;
        if(v[l]+1 <= n)
            s.insert({v[l],v[l]+1});
        if(v[l]-1>=1)
            s.insert({v[l]-1,v[l]});
        if(v[r]+1 <= n)
            s.insert({v[r],v[r]+1});
        if(v[r]-1 >= 1)
            s.insert({v[r]-1,v[r]});
        
        for(auto x : s){
            ans -= pos[x.ff]>pos[x.ss];
        }
        swap(v[l],v[r]);
        pos[v[l]]=l;
        pos[v[r]]=r;

        for(auto x : s){
            ans += pos[x.ff] > pos[x.ss];
        }

        cout << ans << endl;
        s.clear();
    }

    return 0;
}