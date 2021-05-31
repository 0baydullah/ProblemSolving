#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    char c;
    set <char> username;
 
    while(cin>>c) username.insert(c);
    (username.size() % 2 == 0 )? cout << "CHAT WITH HER!" <<endl : cout << "IGNORE HIM!" << endl;
}