#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back
#define all(v) v.begin(),v.end()
#define rsort(s)  sort(s.rbegin(),s.rend())
#define rev(v)    reverse(v.begin(),v.end())

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

void solve()
{
	string s;
    cin >> s;
    set <char> st;
    for(int  i = 0; i < 4; i++){
        st.insert(s[i]);
    }
    
    sort(all(s));
    if(s[0] == s[3]){
        cout << -1 << endl; return;
    }
    bool f = 0;
    map <char, int> mp;
    for(int i = 0; i < 4; i++){
        mp[s[i]]++;
        if(mp[s[i]] == 3){
            f = 1;
        }
    }
    if(f){
        cout << 6 << endl; return;
    }
    cout << 4 << endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
       solve();
    
    }

    return 0;
}   