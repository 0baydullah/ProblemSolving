#include <bits/stdc++.h>
using namespace  std;

int main()
{
   string s; cin >> s;
   int n = s.size();
   char x;
   if(s[0]!= '-')
        cout << s << endl;
   else
   {
       if(s[n-1] > s[n-2])
       {
           s.erase(n-1);
           cout << s;
       }
       else
       {
           s.erase(s.end()-2);
           cout << stoi(s) ;
       }

   }
}
