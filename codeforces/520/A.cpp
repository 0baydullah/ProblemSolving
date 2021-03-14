#include<bits/stdc++.h>
using namespace std;

int main()
{
    char l;
    int x;

    set <char> s;
    cin >>x;
    while(cin>>l)
        {l=tolower(l);
        s.insert(l);}
  s.size()==26 ? cout << "YES" : cout << "NO";
}
