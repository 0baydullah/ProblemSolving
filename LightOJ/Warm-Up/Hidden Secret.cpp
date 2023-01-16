#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;string a,b; 

int main()
{
   // ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;getchar();
    for(int t=1 ; t <= T ; t++){
      cout << "Case " << t << ": ";
       
      
      getline(cin,a);
      getline(cin,b);

      transform(a.begin(),a.end(),a.begin(),::tolower);
      transform(b.begin(),b.end(),b.begin(),::tolower);
      
      a.erase(remove(a.begin(),a.end(),' '), a.end());
      b.erase(remove(b.begin(),b.end(),' '), b.end());

      sort(a.begin(),a.end());
      sort(b.begin(),b.end());

    //  cout << a << endl << b << endl;

      cout << (a==b? "Yes\n" : "No\n");


    }

    return 0;
}