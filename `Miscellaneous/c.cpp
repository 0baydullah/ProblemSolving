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
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        int n; cin >> n;
        if(n<100){
            cout << 99 << endl;
            return 0;
        }
        string a,b,c,tmp;
        tmp=to_string(n);
        tmp[tmp.size()-1]='9'; 
        tmp[tmp.size()-2]='9';
        b=tmp;
        tmp[tmp.size()-3]+=1;
        c=tmp;
                tmp[tmp.size()-3]-=1;
        a=tmp;
        int aa,bb,cc;
        aa=a.to_int;
        bb=b.to_int;
        cc=c.to_int;
        aa = abs(n-aa);
        bb= abs(n-bb);
        cc= abs(n-cc);
        if()

    }

    return 0;
}