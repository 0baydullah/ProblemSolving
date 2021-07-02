#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--)
    {
        pair <int,int> p;
        cin >> p.first >> p.second ;
        cout << ((23- p.first)*60)+(60-p.second) <<endl;
    }

    return 0;
}
