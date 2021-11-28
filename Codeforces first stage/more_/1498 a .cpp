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
        unsigned long long int n;
        cin>> n;

        if (n%3 == 0) cout << n << endl;
        else {
            n= n+ (3-(n%3));
            cout << n << endl;
        }
    }


    return 0;
}
