#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n,m,Min;

    cin >> n >> m;
    Min = min(n,m);

    if(Min % 2 == 0)
        cout << "Malvika" ;
    else cout << "Akshat";

    return 0;
}
