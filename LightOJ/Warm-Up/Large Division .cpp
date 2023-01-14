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
      cout << "Case " << t << ": ";
        string a; int b;
        cin >> a >> b;
        if(a[0]=='-') a.erase(0,1);   
        b=abs(b);
        ll rem=0;
        for(int i=0 ; i<a.size() ;i++){
            rem= (rem*10)+a[i]-'0';
            rem%=b;
        }
        cout << (rem>0 ? "not divisible\n" : "divisible\n");
        
    }

    return 0;
}