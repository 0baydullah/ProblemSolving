#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int t;
	cin >> t;
	while (t--) {
		vector<int> a(3);
		for (auto &it : a) cin >> it;
		sort(a.begin(), a.end());
		if (a[1] != a[2]) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl << a[0] << " " << a[0] << " " << a[2] << endl;
		}
	}
	
	return 0;
}