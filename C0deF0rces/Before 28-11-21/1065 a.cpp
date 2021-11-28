#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        string s;
        s= to_string(n);
        cout << (*max_element(s.begin(), s.end()) - '0') << "\n";
    }

    return 0;
}
