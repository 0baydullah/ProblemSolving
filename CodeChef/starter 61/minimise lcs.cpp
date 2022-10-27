#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

void miryoku()
{
    int n; cin >> n;
    string s; cin >> s;
    string t; cin >> t;
    vector<int> a(26,0),b(26,0);
    for(int i=0 ; i<s.size() ; i++)
    {
        a[s[i]-'a']++;
        b[t[i]-'a']++;
    }
    int mn=0;
    bool key =1;
    for(int i=0 ; i<26 ; i++){
        if(a[i]!=0 && b[i]!=0){
            mn=max(mn,min(a[i],b[i]));
            key =0;
        }
    }
    if(key==0)
   cout << mn << endl;
   else cout << 0 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        miryoku();
    }

    return 0;
}