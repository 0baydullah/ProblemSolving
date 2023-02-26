#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

#define M 5000005
int phi[M];

void PhiSieve() {
  for (int i = 1; i < M; i++) {
    phi[i] = i;
  }
  for (int p = 2; p < M; p++) {
    if (phi[p] == p) { // p is a prime
      for (int k = p; k < M; k += p) {
        phi[k] -= phi[k] / p;
      }
    }
  }
}

ull qs[M];

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    PhiSieve();
    
    for(int i=1; i<M; i++){
        qs[i]=qs[i-1] + (1LL * phi[i]*phi[i]);
    }
    for(int t=1 ; t <= T ; t++){
      cout << "Case " << t << ": ";
        int a, b; cin >> a >> b;
        cout << qs[b]-qs[a-1] << endl;
    }
    return 0;
}