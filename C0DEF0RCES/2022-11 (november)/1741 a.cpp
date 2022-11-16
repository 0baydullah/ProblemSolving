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
        string s, t;
		cin >> s >> t;
		int a{0};
		if(s.back() == 'S') a -= s.size();
		if(s.back() == 'L') a += s.size();
		if(t.back() == 'S') a += t.size();
		if(t.back() == 'L') a -= t.size();
		cout << (a > 0 ? '>' : a < 0 ? '<' : '=') << '\n';
    }

    return 0;
}