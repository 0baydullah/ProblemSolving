
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set <int> level;
    int n,p,q;
    cin >> n;
    cin >>p;
    for(int i=0 ; i<p ; i++)
    {
        int x;
        cin>>x;
        level.insert(x);
    }
    cin >>q;
    for(int i=0 ; i<q ; i++)
    {
        int x;
        cin>>x;
        level.insert(x);
    }

    level.size()==n ? cout<<"I become the guy." : cout<<"Oh, my keyboard!";

}
