#include <iostream>
using namespace std;

int main()
{
    int n , big = 0, flag =0;
    cin >> n;
    int exi[n], ent[n];
    for(int i = 0 ; i<n ;i++)
    {
        cin >>  exi[i] >> ent[i];
    }
    for(int i = 0 ; i<n ;i++)
    {
        flag =flag + ent[i] - exi[i];
        if(flag>big)
            big=flag;
    }
    cout << big;
}
