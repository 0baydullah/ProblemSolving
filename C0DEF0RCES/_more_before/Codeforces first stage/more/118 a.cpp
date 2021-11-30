#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);


    while(1)
    {
          char x;
          cin >> x;
          if(x!='a' || x!='e' || x!='i'|| x!='o'|| x!='u'|| x!='y'|| x!='A'|| x!='E'|| x!='I'|| x!='O'|| x!='U'|| x!='Y')
          {
              x= tolower(x) ; cout << "." << x;
          }

    }

    return 0;
}
