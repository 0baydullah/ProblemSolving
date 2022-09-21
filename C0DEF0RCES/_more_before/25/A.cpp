#include <iostream>
using namespace std;

int main() {

    int n;
    cin >>n;
    int a[n];
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
        a[i] %=2;
    }
    
 /*   if(a[0] && a[1] && a[2])
    {
        for(int i = 3;i<n;i++)
    {
        if(a[0]!=a[i])
        {
            cout<<i+1;
            return 0;
        }
    }
    }
    else
    {*/
        if(a[0]==a[1])
           {
            for(int i = 2;i<n;i++)
    {
        if(a[0]!=a[i])
        {
            cout<<i+1;
            return 0;
        }
    }
        }
        
        else  if(a[0]==a[2])
           {
            cout<<'2';
            return 0;
        }
        else {cout<<'1';return 0;}
        
    
    
    return 0;
}