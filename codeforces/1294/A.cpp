#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t,a,b,c,n,s;
    cin >> t;
    while(t--)
    {
        scanf("%d %d %d %d",&a,&b,&c,&n);
        s=a+b+c+n;
        if(s%3==0 && s>=a*3 && s>=b*3 && s>=c*3) printf("YES\n");
        else printf("NO\n");
    }
}
