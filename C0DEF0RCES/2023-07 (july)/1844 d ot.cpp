#include <iostream>
#include <vector>
#include <set>

using namespace std;

set<int> getFactors(int n) {
    set<int> factors;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            factors.insert(i);
            factors.insert(n / i);
        }
    }
    return factors;
}

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        int n;
        cin >> n;
        set<int> factors = getFactors(n);
        vector<vector<int>> h(n, vector<int>(26));
        vector<int> val(n);
        string sb;

        for (int i = 0; i < n; i++) {
            for (int factor : factors) {
                if (i + factor >= n)
                    break;
                h[i + factor][val[i]] = 1;
            }
            if (i + 1 < n) {
                for (int j = 0; j < 26; j++) {
                    if (h[i + 1][j] == 0) {
                        val[i + 1] = j;
                        break;
                    }
                }
            }
        }
        for (int i : val) {
            char c = i + 97;
            sb += c;
        }
        sb += "\n";
        cout << sb;
    }

    return 0;
}