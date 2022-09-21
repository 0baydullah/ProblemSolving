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
    int n ; 
    string s; cin >> s;
    n=s.size();
    map<char,int> m;
    for(int i=0 ; i<n ; i++){
        m[s[i]]++;
    }
    int cnt{0};
    char odd='0';
    for(auto x:m){
        if(x.second&1){ cnt++; odd=x.first;}
    }
    if(cnt>1) cout << "NO SOLUTION" << endl;
    else{
        vector<char>v,a;
        for(auto x:m){
            for(int i=0 ; i<x.second/2 ; i++){
                v.pb(x.first);
                a.pb(x.first);
            }
        }
        for(auto u:v) cout << u;
        if(odd-'0') cout << odd;
        for(int i=v.size()-1 ; i>=0 ; i--) cout << v[i];
        cout <<endl;
    }
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