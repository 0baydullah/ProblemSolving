#include <bits/stdc++.h>

using namespace std;

int main()
{
   int _2,_3,_5,_6;
   cin >> _2 >> _3 >> _5 >> _6;
   int x,y;
   x=min(_2,min(_5,_6));
   _2 -= x;
   y=min(_2,_3);
   
   cout << (256*x)+(32*y);
   
   return 0;
}