#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

bool ck[3][3];

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
 //   cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
    int a[3][3];
    for(int i=0 ; i<3 ; i++)
        for(int j=0 ; j<3 ; j++) cin >> a[i][j];
    int n; cin >> n;
    int b[n];
    for(int i=0 ; i<n; i++) cin >> b[i];
    for(int k=0 ; k<n ; k++){
        for(int i=0 ; i<3 ; i++)
        for(int j=0 ; j<3 ; j++){
            if(a[i][j]==b[k]) ck[i][j]=1;
        }
    }
    string ans= "No";
    for(int i=0 ; i<3 ; i++)
        if(ck[i][0] and ck[i][1] and ck[i][2]) ans = "Yes";
         for(int i=0 ; i<3 ; i++)
        if(ck[0][i] and ck[1][i] and ck[2][i]) ans = "Yes";
         if(ck[0][0] and ck[1][1] and ck[2][2]) ans = "Yes";
    if(ck[0][2] and ck[1][1] and ck[2][0]) ans = "Yes";
    cout << ans;
    } 
    
   

    return 0;
}