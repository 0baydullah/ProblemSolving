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
        ll n , k;
        cin >> n;
        k=0;
        vector<ll>a(n+1,0),b(n+1,-1);
        map<ll,ll>mp;
        for(int i=0 ; i<n; i++){
            cin >> k;
            if(k<=n){
                mp[k]++;
            }
        }
        for(int i=1; i<=n; i++){
            if(!mp[i])continue;
            for(int j=i ; j<=n; j=j+i)
                a[j]=a[j]+mp[i];
        }


        cout << *max_element(all(a)) << endl;
    }

    return 0;
}