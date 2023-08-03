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
        int n; cin >> n;
        int a[n+1],b[n+1];
        int c[2*n+3]={0},d[2*n+3]={0};
        memset(c,0,sizeof(c));
        memset(d,0,sizeof(d));
        for(int i=0 ; i<n; i++)cin>> a[i];
        for(int i=0 ; i<n; i++)cin>> b[i];

        a[n]=-69;
        b[n]=-96;

        
        int tmp=1;
        for(int i=0 ; i<n; i++){
            if(a[i]==a[i+1]){
                tmp++;
                c[a[i]]=max(c[a[i]],tmp);
            }else{
                c[a[i]]=max(c[a[i]],tmp);
                tmp=1;
            }
        }
        tmp=1;
        for(int i=0 ; i<n ; i++){
            if(b[i]==b[i+1]){
                tmp++;
                d[b[i]]=max(d[b[i]],tmp);
            }else{
                 d[b[i]]=max(d[b[i]],tmp);
                 tmp=1;}
        }
        int ans=1;
        for(int i=0 ; i<n*2+1 ; i++){
            ans=max(ans,c[i]+d[i]);
        }
        cout << ans << endl;
        // for(int i=0 ; i<(n*2+1) ; i++){
        //     cout << c[i] << " " << d[i] << endl;
        // }

    }

    return 0;
}