#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0);cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        int n , r,key,cnt{0};
        cin >> n >> r;

        if(n%2==0)
             key = n/2;
        else key = n/2 + 1;

        if(key >= r)
        {
            for(int i=0 ; i<n ; i++)
            {
                for(int j=0 ; j <n ; j++)
                {
                    if(i==j && i%2==0 && r)
                    {
                       cout << "R";
                        r--;

                    }

                    else cout << ".";
                }
                cout << endl;
            }
        }
        else cout << -1 << endl;
    }
}
