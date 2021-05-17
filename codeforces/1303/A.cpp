#include<bits/stdc++.h>



 
using namespace std;


 
int main(){
    int t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        int cnt = 0;
        int ans = 0;
        int f = 0;
        for(int i = 0; i <= a.size(); i++){
            if(a[i] == '1'){
                f = 1;
                ans += cnt;
                cnt = 0;
            }
            if(a[i] == '0' && f){
                cnt++;
            }
 
        }
        cout << ans << endl;
    }
    return 0;
}
 