#include <iostream>

using namespace std;

int main()
{
   int a, b;
   cin >> a >> b;
   int h = a, c = 0;
   while(a >= b)
   {
       c = a % b;
       a /= b;
       h += a;
       a += c;
   }
   cout << h << endl;
   
   return 0;
}