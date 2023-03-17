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

    int n; cin >> n;
    int aa=0,bb=0;
    while(n--){
        int a,b;cin >> a >> b;
        
        if(aa+a<=500) 
            {
                cout << 'A';
                aa+=a;
            }
        else{
                cout << 'G';
                aa-=b;
            }
    }
    cout << endl;

    return 0;
}