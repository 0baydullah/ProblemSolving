#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;



int main()
{
    int t; cin >> t; while(t--)
    {
        int a,b; cin >> a>>b;

        if(a*2 > b) cout << "-1 -1" << endl;
        else cout << a << " " << a*2 << endl;
    }

    return 0;
}