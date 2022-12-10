#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;


#define N (int)1e6+7
long long primes[N], cnt, isPrime[N];

int NOD(int n){
    ll divisor=1;
    for(int i=0 ; i<N and primes[i]*primes[i]<=n ; i++){
        if(n%primes[i] == 0){
            long long k = 1;
        
            while(n%primes[i] == 0){
                n/= primes[i];
                k++;
               // if(n==0 or n==1) break;
            }
            divisor *= k;
        }
    }
    if(n>1) divisor *= 2;
    return divisor;
}


void sieve()
{
    for (long long i=3; i<N; i+=2)
        if(!isPrime[i])
            for (long long j=i*i; j<N; j+=i+i)
                isPrime[j]=1;

    primes[cnt++]=2;
    for (long long i=3; i<N; i+=2)
        if(!isPrime[i]) primes[cnt++]=i;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
    sieve();
    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
      cout << "Case " << t << ": ";
        ll n; cin >> n;
        
        cout << NOD(n)-1 << endl;
    }

    return 0;
}
