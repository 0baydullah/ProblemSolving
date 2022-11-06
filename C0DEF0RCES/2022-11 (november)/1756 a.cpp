#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
            int a,b,c;
        cin >> a >> b >> c;
        int mx=max({a,b,c});
        if(a==b and b==c) cout << "1 1 1\n";
        else{
            if(mx==a) cout << mx-a << " ";
            else cout << mx+1-a << " ";
            if(mx==b) cout << mx-b << " ";
            else cout << mx+1-b << " ";
            if(mx==c) cout << mx-c << endl;
            else cout << mx+1-c << endl;
        }
        
    }
    
}