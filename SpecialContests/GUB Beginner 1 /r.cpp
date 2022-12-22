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
        int a,b; cin >> a >> b;
        int Xor;
        if(a%4==1) Xor=a-1;
        else if(a%4==2) Xor =1;
        else if(a%4==3) Xor=a;
        else Xor =0;

        if(Xor==b) cout << a << endl;
        else if((Xor^b) !=a) cout << a+1 << endl;
        else cout << a+2 << endl;
    }

    return 0;
}