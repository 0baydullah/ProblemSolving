#include <bits/stdc++.h>
using namespace std;

int main()
{

    char c,s='a';
int k=0;

while(cin>>c)k+=min(abs(s-c),26-abs(s-c)),s=c;
cout<<k;


}
