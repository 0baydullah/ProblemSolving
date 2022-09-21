#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a=0,b=0,c=0;
        cin>>n;
 
       if(n==1||n==2||n==4)
       {
           cout<<"-1"<<"\n";
       }
       else
       {
           int tem;
 
          a=n/3;
          tem=n%3;
          if(tem==0)
          {
              cout<<a<<" "<<b<<" "<<c<<"\n";
          }
          else
          {
              if(tem==2)
              {
                  a=a-1;
                  b=b+1;
              }
              else
              {
                  a=a-2;
                  c=c+1;
              }
              cout<<a<<" "<<b<<" "<<c<<"\n";
          }
 
 
       }
}
return 0;
}
