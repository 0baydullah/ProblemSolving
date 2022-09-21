#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n; cin >> n;
   string s; cin >> s;
   cout << abs(n-count(s.begin(),s.end(),'1')*2);

   return 0;
}
