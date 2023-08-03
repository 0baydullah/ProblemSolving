#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back
#define srt(s)  sort(s.begin(),s.end())
#define rsrt(s)  sort(s.rbegin(),s.rend())
#define rev(v)    reverse(v.begin(),v.end())
#define all(x)   x.begin(),x.end()
#define getbit(n, i) (((n) & (1LL << (i))) != 0)
#define setbit0(n, i) ((n) & (~(1LL << (i))))
#define setbit1(n, i) ((n) | (1LL << (i)))
#define togglebit(n, i) ((n) ^ (1LL << (i)))
#define lastone(n) ((n) & (-(n)))
#define ff first
#define ss second

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
        int n; cin >> n;
        string s; cin >> s;
        char tmp=s[0]; string ans="";
        bool flag=1;
        // for(int i=0 ; i<s.size()-1 ;i++){
        //     if(s[i] != s[i+1] and flag){
        //         ans.pb(s[i]);
        //         flag=0;
        //     }
        //     else if(tmp==s[i]){
        //         tmp=s[i+1];
        //         flag=1;
        //     }
        // }
        ans.pb(s[0]);
        for(int i=1 ; i<s.size() ; i++){
            if(tmp == s[i] ){
                ans.pb(s[i+1]);
                tmp=s[i+1];
                i++;
            }
        }
        for(int i=0; i<ans.size()-1 ; i++)
        cout << ans[i];
        cout << endl;
    }

    return 0;
}