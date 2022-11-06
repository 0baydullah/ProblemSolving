#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i=0 ; i<t ; i++)
    {
        int n; cin >> n;
        long long a[n], mn=99999999999999999;
        for(int i=0 ; i<n; i++){
            cin >> a[i];
            if(a[i]<mn)
                mn=a[i];
        } 
        if(a[0]==mn) cout << "YES\n";
        else cout << "NO\n";

    }
    
}