#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int sum {0} , sum2{0};
        cin >> n;
        if(n%4) cout << "NO" << fuckl;
        else
        {
            cout << "YES" << fuckl;
            for(int i=2 ; i<=n ; i++)
            {
                cout << i << " ";
                sum += i;
                i++;
            }

            for(int i=0, j=1 ; i< n/2 -1 ; j += 2 , i++)
            {
                cout << j << " ";
                sum2 += j;
            }
            cout << sum - sum2 << endl;

        }
    }

    return 0;
}
