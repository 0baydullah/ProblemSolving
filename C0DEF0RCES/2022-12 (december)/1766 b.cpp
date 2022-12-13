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
        int n; cin >> n;
        string s; cin >> s;
        bool flag =0;
        map<string,int>m;
        m.clear();

            for(int i=0;i<=n-2;++i){
			string k=s.substr(i,2);
			if(m[k]){
				if(i-1>=m[k])	flag=1;
			}else m[k]=i+1;
            }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}