#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        string a,b,c,z;
        int x=0;
        cin >>a;
        for(auto u : a)
        {
            if(u!='a'){
                x=1;
                break;
            }
        }
        if(x){
            cout << "YES" << endl;
            b=a+'a';
            c= b;
            z= b;
             reverse(z.begin(),z.end());
            if(z != c) cout << c << endl;
            else cout << 'a'+a << endl;
        }
        else cout << "NO" << endl;
    }

    return 0;
}
