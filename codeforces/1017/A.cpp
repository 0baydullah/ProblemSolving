#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n,k;cin >> n;
    vector <int> v(n);
    int total=0,smith;
     for( k=0 ; k<n ; k++)
    {
        for(int i=1 ; i<=4 ; i++)
        {
            int x;
            cin >>x;
            total += x;
        }
        v[k]=total;
        total=0;
    }
    smith=v[0];
    sort(v.rbegin(),v.rend());
    for(int i=0 ; i<n ; i++)
    {
        //cout << v[i];
       if(v[i]==smith)
        {
           cout << i+1 << fuckl;
           return 0;
        }
    }

    return 0;
}
