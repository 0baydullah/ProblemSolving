#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t;

    cin >> t ;
    while(t--)
    {
        int total{0}, avg{0},cnt{0};
        int n;
        cin >> n;
        int a[n];
        for (int i=0 ; i<n ; i++)
        {
            cin >> a[i];
            total += a[i];
        }
        avg = total/(double)n;
        if (total%n != 0)
        {
            cout << "-1" <<endl;
        }
        else {
            for (int i=0 ; i<n ; i++)
            {
                if(a[i] > avg) cnt ++;
            }
            cout << cnt << endl;
        }
    }

    return 0;
}
