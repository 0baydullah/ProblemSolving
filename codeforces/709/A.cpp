#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n , b, d;
    vector <int> a;
    int total = 0, cnt = 0;
    cin >> n >> b >> d;
    while(n--)
    {
        int x ; cin >> x;
        if(x<=b)
        {
            total += x;
            if(total>d)
            {
                cnt++;
                total=0;
            }
        }

    }
    cout << cnt << fuckl;

    return 0;
}
