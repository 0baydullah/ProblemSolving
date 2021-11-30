#include<iostream>
using namespace std;
int main()
{
    int t ;
    int w,h,n;
    cin >> t;
    while (t--)
    {
        cin >>w>>h>>n;

        if(n==1)
        {
        cout<< "YES" <<endl;
        }
        else
        {
             if(w%2==0)
             {

             }
        }
        if(w%2==0)
        {
            ((w/2)*h)+1 >= n ? cout<< "YES" <<endl: cout << "NO"<<endl;
        }
        else if (h%2==0)
        {
            ((h/2)*w)+1 >= n ? cout<< "YES" <<endl: cout << "NO"<<endl;
        }
        else
    }
}

