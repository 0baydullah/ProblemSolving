#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int x =1 ; x<= t ; x++){
        long long hexfib[10009],n;

        cin >> hexfib[0] >> hexfib[1] >> hexfib[2] >> hexfib[3] >> hexfib[4] >> hexfib[5] >> n;
        for (int i=6 ; i<=n ; i++)
        {
            hexfib[i] = (hexfib[i-1] + hexfib[i-2] + hexfib[i-3] + hexfib[i-4] + hexfib[i-5] + hexfib[i-6])%10000007;
        }

        cout << "Case " << x <<": " << hexfib[n] % 10000007 << endl;
    }
    return 0;
}