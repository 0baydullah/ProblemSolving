#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t,_1=0,_2=0;
    cin >> t;
    int l=1; int k=3;
   string a,b,c;
   while(t--)
   {
       cin >> a;

       if(l)
       {

        b=a;
        l=0;
       }

       if(a==b) _1++;
       else {

           if(k){ c=a; k=0;}
           _2++;
       }


   }
   if(_1>_2) cout << b << endl;
       else cout << c << endl;


    return 0;
}
