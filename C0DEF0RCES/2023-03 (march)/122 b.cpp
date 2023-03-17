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

    string s; cin >> s;
    int _4=0,_7=0;
    for(int i=0 ; i<s.size(); i++){
        if(s[i]=='4')_4++;
        else if(s[i]=='7')_7++;
        else continue;
    }
    if(_4==_7 and _4!=0)cout << 4 << endl;
    else if(_7>_4)cout << 7 <<endl;
    else if(_4>_7) cout << 4 <<endl;
    else if(_7==0 and _4==0) cout <<-1 << endl; 

    return 0;
}