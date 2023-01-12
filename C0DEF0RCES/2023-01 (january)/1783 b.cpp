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
        int n;
        cin >> n;
        int st =1 ,lst =n*n;
        if(n==2){
            cout << 1 << " " << 3 << endl;
            cout << 4 << " " << 2 << endl;
            continue;
         }
        if(n==3){
            cout << 1 << " " << 3 <<" " << 4<< endl;
            cout << 9 << " " << 2 <<" " << 7<< endl;
            cout << 5 << " " << 8 <<" " << 6<< endl;

            continue;
         }
        bool toggle=0;
        for(int i=0 ;i <n ;i++){
            for(int j=0 ; j<n; j++){
                if(toggle){
                    cout << lst << " ";
                    lst--;
                    toggle=!toggle;
                }else{
                    cout << st << " ";
                    st++;
                    toggle=!toggle;
                }
            }
                cout << endl;

        }
    }

    return 0;
}