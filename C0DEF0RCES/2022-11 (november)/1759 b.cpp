#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        int m, s;
    std::cin >> m >> s;
    
    int max = 0;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        max = std::max(max, x);
        s += x;
    }
    
    for (int i = max; ; i++) {
        int x = i * (i + 1) / 2;
        if (s < x) {
            cout << "NO\n";
            break;
        }
        if (s == x) {
            cout << "YES\n";
            break;
        }
    }
    }

    return 0;
}