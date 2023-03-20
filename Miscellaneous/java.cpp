#include<bits/stdc++.h>
using namespace std;


const int N = 1e6 + 9;
int phi[N];
void totient() {
  for (int i = 1; i < N; i++) phi[i] = i;
  for (int i = 2; i < N; i++) {
    if (phi[i] == i) {
      for (int j = i; j < N; j += i) phi[j] -= phi[j] / i;
    }
  }
}


int32_t main() {
  totient(); 
    int n; cin >> n;
    cout << phi[n] << endl;
 
  return 0;
}