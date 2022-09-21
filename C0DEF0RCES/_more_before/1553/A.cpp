#include <bits/stdc++.h>

using namespace std;

int main()
{
    int long long t;
    cin>> t;
    while(t--)
    {
        string n;
        cin >> n;
        int x=0;
        if(n[n.size()-1] == '9') x++;
        cout << stoll(n)/10+x << endl;
    }
   return 0;
}