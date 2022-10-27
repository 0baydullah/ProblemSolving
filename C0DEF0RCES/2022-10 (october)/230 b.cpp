#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

const  long long N = 1e6+9;

int prime[N]={0};
set<long long>tprime; 

void sieve(){
    tprime.insert(4);
    for(long long i=3; i<N; i+=2){
        if(prime[i]==0){
            tprime.insert(i*i);
            for(long long j=i ; j<N ; j+=i){
                prime[j]=1;
            }
        }
    }
}

void miryoku()
{
    int n; cin >> n;
    sieve();
    for(ll i=0 ; i<n ;i++){
        ll x; cin >> x;
        if(tprime.find(x) != tprime.end())
            cout << "YES\n";
        else cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
   // cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        miryoku();
    }

    return 0;
}