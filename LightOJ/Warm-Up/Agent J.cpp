#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

double area(double r, double angle){
    return 0.5*r*r*angle;
}

double angle(double A, double B, double C)
{
    return acos( ( (B*B)+(C*C)-(A*A) ) / (2*B*C) ) ;
}



int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
      cout << "Case " << t << ": ";
        double a,b,c,at,s;
        cin >> a >> b >> c;
        s=(a+a+b+b+c+c)/2.0;
        at= sqrt(s*(s-a-b)*(s-b-c)*(s-c-a));

        at-=area(a,angle(b+c,c+a,a+b));
        at-=area(b,angle(c+a,a+b,b+c));
        at-=area(c,angle(a+b,b+c,c+a));

        cout << fixed << setprecision(8) << at << endl;
    }

    return 0;
}