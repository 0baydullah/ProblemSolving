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
    string s,t; cin >> s >> t;
    int cnt , i;
    for(i=0,cnt=0 ; i<s.size() ;i++){
        if(s[i]==t[cnt]) cnt++;
        if(cnt==t.size()){
            cout << "automaton\n"; 
            return 0;
        }
    }
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){cout <<"array\n";return 0;}
    for(i=0,cnt=0; i < s.size();i++){
        if(s[i]==t[cnt])cnt++;
        if(cnt==t.size())
        {
            cout << "both\n";
            return 0;
        }
    }
    cout << "need tree\n" ;
    return 0;
}