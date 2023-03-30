#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back
#define all(v) v.begin(),v.end()
#define sort(s)  sort(s.begin(),s.end())
#define rsort(s)  sort(s.rbegin(),s.rend())
#define rev(v)    reverse(v.begin(),v.end())

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    string s; cin >> s;
    for(int i=0 ; i<s.size(); i++){
        if(s[i]=='.')break;
        else cout << s[i];
    }
    cout << endl;

    return 0;
}