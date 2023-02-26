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
        string x,y;
        cin >> x >> y;
        bool flag=0; 
       for(int i=1 ; i<a ; i++){
            if(x[i]==x[i-1])
            flag=1;
       }
       for(int i=1 ; i<b ; i++){
            if(y[i]==y[i-1])
            flag=1;
       }
       if(!flag){
        cout << "YES\n" ;
        continue;
       }
        if((x[a-1]==y[b-1] and ((y[b-1]==y[b-2]) or y[b-1]==x[a-2]))) cout << "No\n";
        else cout << "YES\n";
    }

    return 0;
}