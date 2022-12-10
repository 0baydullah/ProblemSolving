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
   // for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        int i,j,l,r,k,p,m;
        string s,a,b,c,d;
        cin >> s>>m;
        
    for(j=0;j<m;j++){
 
        cin>>l>>r>>k;
 
        p=r-l+1;
 
        a=s.substr(l-1,p);
        b=s.substr(0,l-1);
        c=s.substr(r,s.size()-r);
 
        d=a;
 
        for(i=0;i<p;i++){
            d[(i+k)%p]=a[i];
        }
        s=b+d+c;
    }

        cout << s;
   // }

    return 0;
}