#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    int y = max(max(a[2]*a[1],a[2]+a[1])*a[0],max(a[2]*a[1],a[2]+a[1])+a[0]);
    int x = max(max(a[0]*a[1],a[0]+a[1])*a[2],max(a[0]*a[1],a[0]+a[1])+a[2]);
    cout << max(x,y);
    return 0;
}
