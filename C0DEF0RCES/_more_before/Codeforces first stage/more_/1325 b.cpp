#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        set <int> x;
        cin >> n;
        while (n--)
        {
            int a;
            cin >> a;
            x.insert (a);
        }
        cout << x.size() << endl;
    }


    return 0;
}
