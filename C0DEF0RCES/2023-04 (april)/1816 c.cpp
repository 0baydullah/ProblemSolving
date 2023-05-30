#include "bits/stdc++.h"


#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool flag = true;

        for(ll i=n-1 ; i>0 ; i-=2){
            if(a[i]<a[i-1]){
                if(i-1==0)flag =0;
            }
            else if(i-2>=0)
                a[i-2]+=(a[i]-a[i-1]);
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}