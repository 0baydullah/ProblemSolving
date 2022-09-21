#include <bits/stdc++.h>
using namespace std;

main()
{
    char a[101],b[101];
    cin>> a >>b;
    for(int i=0; i<strlen(a) ; i++)
    {
         a[i]==b[i] ? cout << "0" : cout <<"1";
    }

}
