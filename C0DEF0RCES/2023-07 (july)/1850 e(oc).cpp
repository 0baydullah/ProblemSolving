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

ll n , c; 
vector<ll>v;

ll check(int x){
    ll sum{0};
    for(int i=0 ; i<n ;i++){
        sum+=(v[i]+x*2)*(v[i]+x*2);
        if(sum>c){
            return 2;
        }
    }
    if(sum==c) return 69;
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        cin >> n >> c;
        v.resize(n);
        for(int i=0 ; i<n; i++){
            cin >> v[i];
        }
        ll hi=1e9+1,lo{1};
        
        while(lo<=hi){
            ll mid{(hi+lo)/2};
            ll flag;
            flag=check(mid);
            if(flag==69){
                cout << mid << endl;
                break;
            }
            if(flag==2){
                hi=mid-1;
            }
            if(flag==1){
                lo=mid+1;
            }
        }
    }

    return 0;
}