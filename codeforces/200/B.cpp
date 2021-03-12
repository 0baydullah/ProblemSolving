#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d[100],n,total{0};
    cin>>n;
    for(int i= 0; i<n ; i++)
    {
        cin>> d[i];
        total=total+d[i];
    }
    cout << total/(double)n;
}
