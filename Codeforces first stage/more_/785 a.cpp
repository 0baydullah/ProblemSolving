#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, flag{0};
    char p[20];
    cin >> n;

    while (n--)
    {
        cin>>p;

        if (p[0]=='T') flag+=4;
        else if (p[0]=='C') flag+=6;
        else if (p[0]=='O') flag+=8;
        else if (p[0]=='D') flag+=12;
        else flag+=20;
    }
    cout<<flag<<endl;
}
