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
    int n,m,k; cin >> n >> m >> k;
    bitset<32> ar[m+1];
    for (int i = 0; i < m+1; i++)
    {
        int x; cin >> x;
        ar[i]=x;
    }
    int ans =0 ; 
    for(int i=0 ; i<m ; i++){
        int k_diff =0;
        for(int j=0 ; j<32 ; j++)
        if(ar[m][j]!=ar[i][j]){
            k_diff++;
        }
        if(k_diff <= k)
            ans++;
    }
    cout << ans;
    
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
   // cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        miryoku();
    }

    return 0;
}