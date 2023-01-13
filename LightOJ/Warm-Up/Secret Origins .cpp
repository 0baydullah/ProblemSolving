#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

string dec_to_bin(int n) {
    string ret = "";
    for (int i = 31; i >= 0; i--) {
        int k = 1 << i;
        ret += (n & k)? '1' : '0';
    }
    return ret;
}

int bin_to_dec(string s) {
    int ret = 0;
    for (int i = 0; i < 32; i++) 
        ret = (2*ret) + s[i] - '0';
    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    cout << "Case " << t << ": ";
        int n; cin >> n;
        string s=dec_to_bin(n);
        next_permutation(s.begin(),s.end());
        cout << stoi(s,0,2) << endl;  
    }

    return 0;
}