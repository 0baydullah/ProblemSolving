#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t; cin >> t; 
   while(t--)
   {
       int n,m,k;
       cin >> n >> m >> k;
       (n*m)-1==k ? cout << "YES\n" : cout << "NO\n";
   }
   
   return 0;
}