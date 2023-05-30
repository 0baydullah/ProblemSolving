#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back
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

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
    string s; int n;
    char x; cin >>n >>  x >> s;
    bool flag=1;
    if(x=='0'){
        cout << s << x << endl;
        continue;
    }
    for(int i=0 ; i<n ; i++){
        if(s[i]<x and flag){
            cout << x << s[i];
            flag=0;
        }
        else cout << s[i];
    }
    if(flag==1) cout << x ;
    cout << endl;
        
    }

    return 0;
}