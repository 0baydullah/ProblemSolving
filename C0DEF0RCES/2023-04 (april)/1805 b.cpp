#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back
#define all(v) v.begin(),v.end()
#define srt(s)  sort(s.begin(),s.end())
#define rsrt(s)  sort(s.rbegin(),s.rend())
#define rev(v)    reverse(v.begin(),v.end())
#define all(x)   x.begin(),x.end()

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

void solve()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i <= 256; i++){
        int b[n];
        b[0] = (a[0] ^ i);
        int tm = b[0];
        for(int j = 1; j < n; j++){
            b[j] = (a[j]^i);
            tm ^= b[j];
        }
        if(tm == 0){
            cout << i << endl; return;
        }

    }
    cout << -1 << endl;
}

void codex()
{
    int n; cin >> n; string s; cin >> s;
    char ch = 'z';
    int pos = -1;
    for(int i = n - 1; i >= 0; i--){
        if(ch > s[i]){
            ch = s[i];
            pos = i;
        }
    }
    if(pos == -1 || pos == 0){
        cout << s << endl; return;
    }
    cout << ch;
    for(int i = 0; i < n; i++){
        if(pos == i) continue;
        cout << s[i];
    }
    cout << endl;

}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
         codex();
    }

    return 0;
}