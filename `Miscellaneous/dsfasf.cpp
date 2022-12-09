#include <bits/stdc++.h>
using namespace std;
#define N (int)1e6+7
long long primes[N], cnt, isPrime[N];

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
    sieve();
    int n; cin >> n;
    for(int i=0 ; i<n ; i++)
        cout << primes[i] << " ";
    return 0;
}


