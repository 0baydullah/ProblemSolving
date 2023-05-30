#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back
#define all(v) v.begin(),v.end()
#define srt(s)  sort(s.begin(),s.end())
#define rsrt(s)  sort(s.rbegin(),s.rend())
#define rev(v)    reverse(v.begin(),v.end())
#define all(x)   x.begin(),x.end()

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
        int n,m; cin >> n >> m;
        int x1,x2,y1,y2;
        cin>> x1 >> y1 >> x2 >> y2 ;
        
        ll xx=0 ,yy=0;
        if(x1==1 or x1==n) xx++;
        if(x2==1 or x2==n) yy++;
        if(y1==1 or y1==m) xx++;
        if(y2==1 or y2==m) yy++;

        cout << min(4-xx,4-yy) << endl;
        
    }

    return 0;
}