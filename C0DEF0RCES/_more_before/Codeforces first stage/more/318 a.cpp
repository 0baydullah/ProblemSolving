#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    long long int a , b;
    cin>> a >>b;

    if(a%2 == 0)
    {
        if(a/2 >= b)
            cout << b*2-1 << endl;
        else cout << (b-a/2)*2 << endl;
    }
    else
    {
        if(a/2+1 >= b)
            cout << b*2-1 << endl;
        else cout << ((b-a/2)-1)*2 << endl;
    }

    return 0;
}
