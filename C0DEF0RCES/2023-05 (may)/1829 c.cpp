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
        int n; cin >> n;
        int min1,min11,min10;
        min1=min11=min10=1e7+69;
        while(n--){
            int mn; cin >> mn;
            int skill;  cin >> skill;
            if(skill==1)min1=min(min1,mn);
            if(skill==11)min11=min(min11,mn);
            if(skill==10)min10=min(min10,mn);
        }
        if((min1 < 1e7 and min10 < 1e7) or ( min11 <1e7)){
            cout << min(min11,min1+min10)<< endl;
        }
        else cout << -1 << endl;
    }

    return 0;
}