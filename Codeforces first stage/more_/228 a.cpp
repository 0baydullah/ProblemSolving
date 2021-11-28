#include<bits/stdc++.h>
using namespace std;

int main()
{
    set <int> s;
     int z;
    while(cin >> z)
        s.insert(z);
    cout<<4-s.size();
}
