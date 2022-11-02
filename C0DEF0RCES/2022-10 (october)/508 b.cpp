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
    string s; cin >> s;
    int n= s.size()-1;
    int m=-1;
    for(int i=0 ; i<n ; i++){
        if(int(s[i])%2==0){
            m=i;
            if(int(s[n]>int(s[i]))) break;
        }
    }
    if(m==-1) cout << m << endl;
    else {swap(s[n],s[m]);
    cout << s << endl;}
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
  //  cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        miryoku();
    }

    return 0;
}