


#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >>t;
    lbl:
    while (t--)
    {

        int n;
        cin >> n;
        string a,x;
        cin >> a;

        for (int i= 0 ; i<n ; i++)
        {
                for (int j= i+1 ; j<n ; j++)
            {
                if(a[i]== a[j] && a[j]!= a[j-1])
                {
                    cout << "NO" <<endl;
                   goto lbl;
                }

            }

        }
        cout << "YES" <<endl;
    }

    return 0;
}
