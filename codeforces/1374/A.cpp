#include <bits/stdc++.h>

using namespace std;

int main() {

	
	int t;
	cin >> t;
	while (t--) {
		int x, y, n;
		cin >> x >> y >> n;
		if (n - n % x + y <= n) {
			cout << n - n % x + y << endl;
		} else {
			cout << n - n % x - (x - y) << endl;
		}
	}
	
	return 0;
}