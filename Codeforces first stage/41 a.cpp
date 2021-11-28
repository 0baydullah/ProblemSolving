#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char a[101], b[101];

    gets(a);
    gets(b);
    strrev(a);
    strcmp(a,b)==0 ? cout << "YES"<<endl : cout << "NO"<<endl;
}
