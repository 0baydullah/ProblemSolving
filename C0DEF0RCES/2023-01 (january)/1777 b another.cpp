#include <iostream>
using namespace std;
const int mod = 1e9 + 7;

int power(int x, int y) {
    int res = 1;
    x = x % mod;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % mod;
        y = y >> 1;
        x = (x * x) % mod;
    }
    return res;
}

int main() {
    int t; cin >> t;
    while(t--){
    int n;
    cin >> n;
    cout << (power(n, 3) - n) / 2 % mod << endl;
    }
    return 0;
}