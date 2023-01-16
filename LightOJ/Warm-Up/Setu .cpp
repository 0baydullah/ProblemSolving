//Rahaduzzaman Setu, (Roll - 12) of 13th batch, CSE, University of Dhaka. He passed away on 18th April 2012. May he rest in peace. This problem is dedicated to him. This problem was written during his treatment. He will be in our prayers, always.

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
      cout << "Case " << t << ": \n";
        int n;
        cin >> n;ll sum{0};
        while(n--){
            string s; cin >> s;
            
            if(s=="donate"){
                int x; cin >> x;
                sum+=x;
            }else {
                cout << sum << endl;
            }
        }    
    }

    return 0;
}