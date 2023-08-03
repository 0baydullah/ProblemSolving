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


vector<ll>a,b;
ll n , c; 

ll func( ll aa){
    ll xx{0};
    for(int i=0 ; i<n ; i++){
        xx+=((a[i]+aa)*(a[i]+aa));
        if(xx>c) return 1;
    }
    if(xx==c) return 0;
    else return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        cin >> n >> c;
        a.resize(n);
        
        ll ans;
        for(int i=0 ; i<n; i++) 
        {
            cin >> a[i];
        }

        ll l=1,r=1e9;

        while(l<=r){
            ll x;
            x=(l+r)/2;
            ll flag{func(x+x)};

            if(!flag){
                ans=x;
                break;
            }
            if(flag==-1){
                l=x+1;
            }
            else r=x-1;
        }



        // ll sq= sqrt(sum*sum+c);
        // sq-=sum;
        ans*=ans;
        ans=sqrt(ans);

        cout << ans << endl;
        
    }

    return 0;
}