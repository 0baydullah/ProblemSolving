#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int t,i;
    cin >> t;

    while(t--)
    {
        char s[50];
        cin >> s;

        for (i = 0; i< strlen(s); i++)
        {
            if (i%2 == 0)
            {
                if (s[i] == 'a')
                {
                    s[i]='b';
                }

                else
                {
                    s[i]='a';
                }
            }
            else
            {
                if (s[i] == 'z')
                    s[i]='y';
                else  s[i]='z';
            }
        }

        cout << s << endl;
    }
}

