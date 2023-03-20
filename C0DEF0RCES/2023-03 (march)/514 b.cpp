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

    long double n,x,y,a,b;
    cin >> n >> a >> b;
    set<long double>s;
    int flag=0;
    while(n--){
        cin >> x >> y;
        if(y!=b)
        s.insert((x-a)/(y-b));
        else flag=1;
        
    }
cout << s.size()+flag << endl;
    return 0;
}