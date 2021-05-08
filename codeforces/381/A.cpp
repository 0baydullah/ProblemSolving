
#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    vector <int> v(n);
    for (int i=0 ; i<n ; i++) cin >> v[i];

    int d=0, s=0, t=0;

    while (!v.empty())
    {
        if(t==0)
        {
            if(v[0] > v.back())
            {
                s += v[0];
                v.erase(v.begin());
            }
            else
            {
                s += v.back();
                v.pop_back();
            }
            t=1;
        }
        else
        {
            if(v[0] > v.back())
            {
                d += v[0];
                v.erase(v.begin());
            }
            else
            {
                d += v.back();
                v.pop_back();
            }
            t=0;
        }
    }
    cout << s << " " << d << fuckl;

    return 0;
}
