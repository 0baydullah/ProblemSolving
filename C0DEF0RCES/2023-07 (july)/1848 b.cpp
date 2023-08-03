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

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        ll n,k; cin >> n >> k;
        ll kk=k+1;
        ll nn=n;
        vector<ll>v[kk];;
        ll ii=0;
        while(nn--){
            ll c; 
            cin >> c;
            v[c].pb(ii);
            ii++;
        }

        ll ans =n;
        
        for(int i=1 ; i<=k ; i++){
            ll ex{-1} ;
            ll sm{0};
            ll smm{0};

            for(auto u : v[i]){
                if(u-ex-1>=sm){
                    smm=sm;
                    sm= u-ex-1;
                }
                else if(u-ex-1>=smm){
                        smm=u-ex-1;
                    }
                    ex=u;
            }
            if(n-ex-1>=sm){
                smm=sm;
                sm=n-ex-1;
            }
            else if(n-ex-1>=smm) smm=n-ex-1;
            ans=min(ans,max(smm,(sm/2)));
        }
            cout << ans << endl;




    }

    return 0;
}