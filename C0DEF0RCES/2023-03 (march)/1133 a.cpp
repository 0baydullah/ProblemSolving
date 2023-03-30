#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back
#define all(v) v.begin(),v.end()
#define sort(s)  sort(s.begin(),s.end())
#define rsort(s)  sort(s.rbegin(),s.rend())
#define rev(v)    reverse(v.begin(),v.end())

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int h1,h2,m1,m2;
    char garbage;
    cin >> h1>>garbage>>m1>>h2>>garbage>>m2;

    int h=h2-h1;
    int m;
    if(m2<m1){
        h--;
        m=60-(abs(m1-m2));
    }
    else m=m2-m1;
    m+=h*60;
    m/=2;
    int H,M;
    H=m/60;
    H+=h1;
    M=m%60;
    M+=m1;
    H+=M/60;
    M%=60;

    if(H<10) cout << 0 << H << garbage;
    else cout << H<<garbage;
    if(M<10) cout << 0<<M << endl;
    else cout << M<< endl;

    return 0;
}