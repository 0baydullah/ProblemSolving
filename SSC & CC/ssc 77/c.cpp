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
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        string s; cin >> s;
        int n = s.size();
        int x=ceil(sqrt(n));
        int m = (x*x)-n;
        for(int i=0 ; i<n ;i++) s+='*';
        char a[x][x];
        int xxx=0;
        for(int i=0 ; i<x ; i++)
        {
            for(int j=0 ; j<x ; j++){
                a[i][j]=s[xxx];
                xxx++;
            }
        }
        string ans="";
        for(int i=x-1 ; i>=0 ; i--){
            for(int j=0 ; j<x ; j++){
                if(a[i][j]!='*')ans += a[j][i];
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}