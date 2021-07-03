#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n; vector <int> v(111);
    while(n--)
    {
        int x; cin >> x; v[x]++;
    }
    sort(v.rbegin(),v.rend());
    cout<<v[0];

    return 0;
}
