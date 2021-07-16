#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int t;cin >>t ;
    while(t--)
    {
        int a,b;
        cin >> a>>b;
        
        int x=2*min(a,b);
        if(x<max(a,b))x=max(a,b);
        cout<<x*x<<endl;
   
    }
    
   
   return 0;
}