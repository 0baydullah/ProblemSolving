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
        int n, a,b,c,d;
        cin >> n >>  a >> b >> c >> d;
        a--;
        b--;
        c--;
        d--;
        int aa=min(a,n-a-1);
        int bb=min(b,n-b-1);
        int cc=min(aa,bb);
        int dd=min(c,n-c-1);
        int ee = min(d,n-d-1);

        int x= min(dd,ee);
        int xx=abs(x-cc);
        cout << xx << endl;
    }

    return 0;
}