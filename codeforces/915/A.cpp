#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n , k ,h,i,j,r;
    cin >> n >> k ;
    int  a[n];
     for ( i=0 ; i<n ; i++)
    {
        cin>> a[i];
    }
    sort(a,a+n);
     for (j=0 ; j<n ; j++)
    {
        if(k%a[j]==0)
        {
            if (h==k) break;
           // if (h<a[j])
                h=a[j];

        }
    }
    r= k/h;
    cout << r;
}
