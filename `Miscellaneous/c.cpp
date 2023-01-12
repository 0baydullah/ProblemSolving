#include <iostream>
#include <vector>

using namespace std;

// Returns true if the permutation is sorted, false otherwise
bool is_sorted(vector<int>& permutation) {
    for (int i = 0; i < permutation.size(); i++) {
        if (permutation[i] != i+1) {
            return false;
        }
    }
    return true;
}

int min_operations(vector<int>& permutation, int k) {
    int steps = 0;
    while (!is_sorted(permutation)) {
        int i = 0;
        while (i < permutation.size() && permutation[i] == i+1) {
            i++;
        }
        // move the elements before the longest sorted suffix to the end
        rotate(permutation.begin(), permutation.begin() + i, permutation.end());
        steps++;
    }
    return steps;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;
        vector<int> permutation(n);
        for (int j = 0; j < n; j++) {
            cin >> permutation[j];
        }
        cout << min_operations(permutation, k) << endl;
    }
    return 0;
}
