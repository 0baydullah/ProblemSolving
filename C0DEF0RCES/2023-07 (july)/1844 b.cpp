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

#define SZ 1000007
int MARK[SZ+1];
vector<int>PRIME;

void sieve(){
    MARK[0]=MARK[1]=1;
    int root = sqrt(SZ);

    for(int i=4 ; i<SZ ; i+=2) MARK[i]=1;
    for(int i=3 ; i<=root ; i+=2){
        if(!MARK[i]){
            for(int j=i*i ; j<=SZ ; j+=i*2){
                MARK[j]=1;
            }
        }
    }
    
    PRIME.push_back(2);
    for(int i=3 ; i<=SZ ; i+=2)
        if(!MARK[i])
            PRIME.push_back(i);

    return;
}


int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    sieve();
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        int n;
        cin >> n;
        vector<ll>a(n),b;
        a[0]=2;
        a[n-1]=3;
        a[n/2]=1;
        int cnt=4;
        for(int i=1 ; i<n-1; i++){
            if(i==n/2)continue;
            a[i]=cnt++;
        }
        for(auto u:a) cout << u << " ";
        cout << endl;
    }

    return 0;
}