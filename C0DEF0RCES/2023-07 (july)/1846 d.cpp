#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t; // Read the number of test cases
    
    for (int i = 0; i < t; i++) {
        int n, d, h;
        cin >> n >> d >> h;
        vector<ll>v(n);
        for(int i=0 ; i<n; i++) cin >> v[i];
        double sum=0.5*d*h;
        for(int i=0 ; i+1<n ; i++){
            if(v[i+1]>=v[i]+h){
                sum+=.5*d*h;
            }
            else{
                double dd= (double)d*(v[i]+h-v[i+1])/h;
                double hh= v[i+1] - v[i];
                sum+=(d+dd)/2.0*hh;
            }
           
        }
         cout << fixed << setprecision(10) << sum <<endl;
    }
    
    return 0;
}
