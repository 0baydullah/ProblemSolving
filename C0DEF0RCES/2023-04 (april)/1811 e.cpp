#include <iostream>
#include <string>

using namespace std;

// Check if a number contains the digit 4
bool contains_4(long long n) {
    while (n > 0) {
        if (n % 10 == 4) {
            return true;
        }
        n /= 10;
    }
    return false;
}

// Count the number of live numbers up to n
long long count_live_numbers(long long n) {
    long long cnt = n;
    long long pow = 1;
    while (n > 0) {
        int digit = n % 10;
        if (digit > 4) {
            cnt -= (digit - 1) * pow;
        } else if (digit == 4) {
            cnt -= pow;
        }
        pow *= 9;
        n /= 10;
    }
    return cnt;
}

// Find the k-th live number using binary search
long long find_live_number(long long k) {
    long long left = 1, right = 1e18;
    while (left < right) {
        long long mid = (left + right) / 2;
        if (count_live_numbers(mid) >= k) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return left;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long k;
        cin >> k;
        cout << find_live_number(k) << endl;
    }
    return 0;
}
