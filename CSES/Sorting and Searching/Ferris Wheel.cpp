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

#define int long long
#define ull unsigned long long

using namespace std;

bool x[494049];

int32_t main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int n, k; cin >> n >> k;
    int a[n];
    for(int i=0 ; i<n; i++) cin >> a[i];
    sort(a,a+n);
    int ans=0,tmp=a[0],i=0,j=n-1;

    while(i<j){
        if(a[i]+a[j]>k){
            j--;
        }
        else{
            ans++;
            x[i]=x[j]=1;
            i++;
            j--;
            
        }
    }
    for(int i=0 ; i<n; i++){
        ans+=x[i]==0;
    }
    cout << ans <<endl;
  //  for(int i=0 ; i<n; i++) cout << x[i];

    return 0;
}