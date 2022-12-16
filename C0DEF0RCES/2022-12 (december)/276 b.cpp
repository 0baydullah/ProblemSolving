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
    //cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        string s; cin >> s;
        map<char,int>m;
        for(int i=0 ; i<s.size() ; i++){
            m[s[i]]++;
        }
        int odd_cnt{0};
        for(auto i:m){
            if(i.second&1) odd_cnt++;
        }
        if(odd_cnt<2) cout << "First\n";
        else if(odd_cnt&1) cout << "First\n";
        else cout << "Second\n";
    }

    return 0;
}