#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int x;
    string a,b="-" ;
    cin >> x;
    cin >> a;
  //  if (a.size()%2 != 0)
    {
        for(int i=2 ; i<a.size()-1 ; i+=3)
        {
            a.insert(i,b);
        }
    }
    cout << a;

    return 0;
}
