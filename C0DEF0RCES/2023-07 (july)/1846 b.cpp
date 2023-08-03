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
        
        vector<string>v;
        map<string,int>m;
        for(int i=0 ; i<3 ;i++){
            string a; cin >> a;
            m[a]++;
            v.pb(a);
        }
        for(int i=0; i<3 ; i++){
            string s="";
            for(int j=0 ;j<3 ; j++){
                s+=v[j][i];
            }
            m[s]++;
        }
        string x="";
        x+=v[0][0];
        x+=v[1][1];
        x+=v[2][2];
        m[x]++;
        string y="";
        y+=v[0][2];
        y+=v[1][1];
        y+=v[2][0];
        m[y]++;
        if(m["XXX"]) cout << "X" << endl;
        else if(m["OOO"])cout << "O" << endl;
        else if(m["+++"]) cout << "+" << endl;
        else cout << "DRAW" << endl;
    }

    return 0;
}