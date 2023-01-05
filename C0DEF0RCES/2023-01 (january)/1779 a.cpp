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
        int l=0,r=0;
        string s; cin >> s;
        for(int i=0 ; i<n; i++)
            if(s[i]=='R') r++;
            else l++;
        
        if(l==0 or r==0) cout << -1 << endl;
        else if(s[0]=='R' and s[s.size()-1]=='L')cout << 0 <<endl;
        else{
            for(int i=0 ; i<n-1; i++){
                if(s[i]=='L' and s[i+1]=='R'){
                    cout << i+1 << endl;
                    break;
                }
            }
           
        } 
       
    }

    return 0;
}