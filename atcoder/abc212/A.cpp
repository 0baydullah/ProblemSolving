#include <iostream>

using namespace std;

int main()
{
   int a, b;
   cin  >> a  >> b;
   if(a && b) cout << "Alloy" << endl;
   else if(a==0) cout << "Silver" << endl;
   else cout << "Gold" << endl;
   
   return 0;
}