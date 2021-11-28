#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    unsigned long long n,a{0},b{0};

    cin>> t;
    while (t--)
    {
        a=0,b=0;
        cin>>n;

        for(int i=2 ; n!=0 ; i++)
        {
            if(i%2==0)
            {
                if (n>4 && n%4==0)
                {
                    n--;
                    a++;
                }
                else if(n%2==0)
                {
                    n/=2;
                    a+=n;
                }
                else
                {
                    n--;
                    a++;
                }
            }
            else
            {
                if (n>4 && n%4==0)
                {
                    n--;
                    b++;
                }
                else if(n%2==0)
                {
                    n/=2;
                    b+=n;
                }
                else
                {
                    n--;
                    b++;
                }
            }
        }
        cout<<a<<endl;
    }

}
