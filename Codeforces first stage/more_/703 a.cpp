#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,m=0,c=0;
    cin >> n;

    while (n--)
    {
        int a,b;
        cin >> a >>  b;

        if (a==b) continue;

        a>b ? m++ : c++;

    }
    if (m==c) cout << "Friendship is magic!^^";
    else m>c ? cout << "Mishka" : cout << "Chris";
}
