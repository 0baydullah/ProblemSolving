#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a;
    set <int> s;
    while(cin>> a)
    {
        if(a>='a'&&a<='z')
            s.insert(a);
    }

    cout << s.size();
}
