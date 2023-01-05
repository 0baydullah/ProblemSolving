#include <bits/stdc++.h>

using namespace std;

string solve(vector<long long> a) {
  // Find the GCD of all the numbers in the array
  long long g = a[0];
  for (int i = 1; i < a.size(); i++) {
    g = __gcd(g, a[i]);
  }

  // If the GCD is 1, then we can return "YES"
  if (g == 1) {
    return "YES";
  }

  // Find the LCM of all the numbers in the array
  long long lcm = a[0];
  for (int i = 1; i < a.size(); i++) {
    lcm = (lcm * a[i]) / __gcd(lcm, a[i]);
  }

  // If the LCM is greater than 1, then the GCD of all the numbers
  // in the array plus the LCM will be 1
  if (lcm > 1) {
    return "YES";
  } else {
    return "NO";
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    cout << solve(a) << endl;
  }
  return 0;
}
