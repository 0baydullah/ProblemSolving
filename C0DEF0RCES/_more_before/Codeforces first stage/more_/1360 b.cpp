#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int sz,min=10000;
        cin >> sz;
        int a[sz];
        for(int i = 0 ; i<sz ; i++)
        {
            cin >> a[i];
        }
        sort(a,a+sz);
        for(int i = 0 ; i<sz-1 ;i++)
        {
            int x;
        x = abs(a[i]-a[i+1]);
        if (x<min)
            min = x;



        }
        cout << min<<endl;
    }

    return 0;
}
