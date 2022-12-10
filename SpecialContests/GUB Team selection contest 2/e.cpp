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
        string a; cin >> a;
        for(int i=0 ; i<a.size();i++ ){
            if(a[i]<'a') a[i]+=32;
            else a[i]-=32;
        }
        reverse(a.begin(),a.end());
        for(int i=0 ; i<a.size(); i++){
             if(a[i] < 91 && a[i] > 64)          
                {
                        if(a[i] < 78)
                                a[i] = a[i] + 13;
                        else
                        a[i] = a[i] - 13;
                }
                if(a[i] < 123 && a[i] > 96)  
                {
                        if(a[i] < 110)
                                a[i] = a[i] + 13;
                        else
                                a[i] = a[i] - 13;
                }
        }
        cout << a << endl;
    }

    return 0;
}