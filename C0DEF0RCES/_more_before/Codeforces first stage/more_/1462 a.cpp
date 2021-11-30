#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <int> v(n);
        for(int i = 0 ; i < n ; i++) cin >> v[i];
        int a = 0;
        while(!v.empty())
        {
            if(!a)
            {
                cout << *v.begin() << " ";
                v.erase(v.begin());
                a = 1;
            }
            else
            {
                cout << *v.end() << " ";
                v.pop_back();
                a = 0;
            }
        } cout <<fuckl;
    }

    return 0;
}
