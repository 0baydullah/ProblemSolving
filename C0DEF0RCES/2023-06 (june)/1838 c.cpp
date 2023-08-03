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
        int n, m; cin >> n >> m;
        int ans=1;

        int ev=1, od=((n/2)*m)+1; 

        for(int i=0 ; i< n; i++){
            for(int j=0 ; j<m; j++){
                if(i&1){
                    cout << ev << " ";
                    ev++;
                }
                else{
                    cout << od << " ";
                    od++;
                }
            }
            cout << endl;
        }
        cout << endl;
        
    }

    return 0;
}