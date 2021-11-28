#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char a[20];
    gets(a);

    for (int i= 0 ; i<strlen(a); i++)
    {
        if ((a[i] != '4' && a[i] != '7')||(strlen(a)<2))
        {
            cout << "NO"<<endl;
            return 0;
        }
    }
     cout << "YES"<<endl;
}
