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
        int n , x=0,y=0;
        cin >> n;

        for (int i = 0 ; i<n ; i++)
        {
            int a;
            cin >> a;
            if (i%2 == 0 && a%2 == 1)
                x++;
            if (i%2 == 1 && a%2 == 0)
                y++;
        }
        if(x != y)
            cout << -1 << endl;
		else
            cout << x << endl;

    }

    return 0;
}
