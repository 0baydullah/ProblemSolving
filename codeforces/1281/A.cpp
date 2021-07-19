#include <bits/stdc++.h>
using namespace std;
 
bool check(string s, string t) {
    if(s.length()<t.length())
        return false;
    for(int i=s.length()-1, j=t.length()-1; i>=0 and j>=0; i--, j--)
        if(s[i]!=t[j])
            return false;
    return true;
}
 
void solve() {
    string str;
    cin >> str;
    if(check(str, "po"))
        cout << "FILIPINO\n";
    else if(check(str, "desu") or check(str, "masu"))
        cout << "JAPANESE\n";
    else 
        cout << "KOREAN\n";
}
 
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
 
    int _t; cin >> _t; while(_t--)
    solve();
}