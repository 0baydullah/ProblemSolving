#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        int n, k,carry{0};
        cin >> n >>k;
        for(int i=1 ; i<=n ; i++)
        {
            int x; cin >> x;
            if(i==n)
            {
                cout<< x+carry << " \n";
            }
            else
            {
                if(x<k)
                {
                    cout << 0 << ' ';
                    k = k-x;
                    carry += x;
                }
                else
                {
                    cout << x-k << " ";
                    carry += k;
                    k=0;
                }
            }


        }
    }

    return 0;
}
