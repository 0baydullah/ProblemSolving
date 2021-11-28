#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int x;
int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    string a;

    cin >> a;

    for(int i = 0 ; i< a.size() ; i++)
    {
        if (a[i] == 'H' || a[i] == 'Q' || a[i] == '9' /*|| a[i] == '+'*/  )
        {cout << "YES"<<endl ;return 0;}

    }

        {cout << "NO" <<endl;}

    return 0;
}
