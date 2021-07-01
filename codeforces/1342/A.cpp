#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
            int X = 0;
    long long x , y , a , b;
    cin >> x >> y >> a >> b;

    if (a*2 > b) X = 1;
    if(X) cout << abs(x-y)*a+min(x,y)*b << endl;
    else cout << (x+y)*a << fuckl;
    }
    return 0;
}
