#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,x;
    cin>>t;
    while (t--)
    {
        cin >> a>>b;
        if (a%b==0)
            {x=0;cout <<x <<endl;}
        else if(a<b)
            {x=b-a;cout <<x<<endl ;}
        else {x=b-(a%b);cout << x<<endl;}
    }
}
