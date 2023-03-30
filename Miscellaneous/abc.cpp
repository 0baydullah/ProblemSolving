#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);

	int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        fill(a, a + n - 1, -1); // set all integers to -1
        int pos = 0; // number of subarrays with positive sums
        for (int i = 0; i < n - 1; i += 2) {
            if (pos == k) break;
            a[i] = 1;
            pos++;
        }
        for (int i = 1; i < n - 1; i += 2) {
            if (pos == k) break;
            a[i] = 1;
            pos++;
        }
        if (pos < k) { // if we still haven't reached k subarrays with positive sums
            for (int i = n - 2; i >= 0; i -= 2) {
                if (pos == k) break;
                a[i] = 1;
                pos++;
            }
        }
        a[n - 1] = -1000; // set last integer to -1000
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}