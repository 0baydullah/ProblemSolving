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
   // cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        int n; cin >> n;
        if(n<=1e3-1){
            cout << n << endl;
        }
        else if(n>=1e3 and n<=1e4-1){
            n/=10;
            n*=10;
            cout << n << endl;
        }else if(n>=1e4 and n<=1e5-1){
            n/=100;
            n*=100;
            cout << n << endl;
        }else if(n>=1e5 and n<=1e6-1){
            n/=1000;
            n*=1000;
            cout << n << endl;
        }else if(n>=1e6 and n<=1e7-1){
            n/=10000;
            n*=10000;
            cout << n << endl;
        }else if(n>=1e7 and n<=1e8-1){
            n/=100000;
            n*=100000;
            cout << n << endl;
        }else if(n>=1e8 and n<=1e9-1){
            n/=1000000;
            n*=1000000;
            cout << n << endl;
        }
    }

    return 0;
}