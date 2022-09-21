#include <iostream>

using namespace std;

int main()
{
  int t; cin >> t;
  while(t--)
  {
      string s; cin >> s;
      int x = s[0]-'0';
      if(s.size() == 1) cout << (x-1)*10 +1 << endl;
      else if(s.size() == 2) cout << (x-1)*10 +3 <<endl;
      if(s.size() == 3) cout << (x-1)*10 +6 << endl;
      if(s.size() == 4) cout << (x-1)*10 +10 << endl;
  }
   
   return 0;
}