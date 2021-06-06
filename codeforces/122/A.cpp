#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int a[13] = {4 , 7 , 44 , 47 , 74 , 77 , 444 , 447 , 477 , 744 , 747 ,774,777};
    int n;
    cin >> n;
    for(int i = 0 ; i < 13 ; i++) if(n%a[i] == 0) {
                cout << "YES" << endl;
                return 0;
            }
    cout << "NO" << endl;

    return 0;
}
