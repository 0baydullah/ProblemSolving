#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t; while(t--){
        int n; cin >> n; int a[n];

        for(int i=0 ; i<n ; i++) cin >> a[i];

        if(a[0]==a[1] && a[0]== a[2]){
            for(int i=3 ; i<n ; i++){
                if(a[i] != a[0]){
                    cout << i+1 <<endl;
                    break;
                }
            }
        }
        else{
            if(a[0]==a[1]) cout << 3 <<endl;
            else if (a[2]==a[1]) cout << 1 <<endl;
            else cout << 2 <<endl;
        }
    }

    return 0;
}
