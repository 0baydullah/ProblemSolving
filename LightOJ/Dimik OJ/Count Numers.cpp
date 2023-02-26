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
    cin >> T;
    string x ; getline(cin,x);
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        int cnt=0;
        
        string s; getline(cin,s);
         for(int i=0 ; i<s.size()-1 ; i++){
             if(s[i]==' ' and s[i+1]!=' ')cnt ++;
         }
         cout << ++cnt << endl;
        cout << s << endl;
    }

    return 0;
}