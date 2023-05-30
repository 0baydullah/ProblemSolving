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

    int n,m; cin >> n >> m;
    multiset<int> s;
    for(int i=0 ; i<n; i++){
        int x; cin >> x; s.insert(x);
    }
    for(int i=0 ; i<m; i++){
        int x ; cin >> x;
        auto it = s.upper_bound(x);
        if(it==s.begin()) cout << -1 << endl;
        else{
            cout << *--it << endl;
            s.erase(it);
        }
    }

    return 0;
}