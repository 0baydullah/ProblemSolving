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
        int a[3][3];
        for(int i=0 ; i<3 ; i++)
            for(int j=0 ; j<3 ; j++)
                cin >> a[i][j];
        int up=a[0][1]+a[0][2];
        int down= a[2][0]+a[2][1];
        int total = a[0][1]+a[2][1];
        for(int i=0 ; i<1000009 ; i++){
            a[1][1] = i;
            a[0][0] = total+i-up;
            a[2][2] = total+i-down;
            if(a[0][0]+a[1][1]+a[2][2] == total+i)
            break;
        }
        for(int i=0 ; i<3 ; i++){
            for(int j=0 ; j<3 ; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
            
    }

    return 0;
}   