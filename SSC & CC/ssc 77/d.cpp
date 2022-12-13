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
    //cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        map<char,int>m;
        int x=3; while(x--){
            string s; cin >> s;
            if(s[1]=='>'){
                m[s[0]]++;
                m[s[2]]--;
            }
            else {
                m[s[0]]--;
                m[s[2]]++;
            }
           
            }

            vector<pair<int,char>>p;
             if(m['A']==m['B'] or m['C']==m['B'] or m['A']==m['C'] ){
                cout << "Impossible" <<endl;
            }else {
                for(auto u:m){
                    p.pb({u.second,u.first});

                }
                sort(p.begin(),p.end());
                for(auto u:p){
                    cout << u.second;
                }
                cout << endl;
        }
    }

    return 0;
}