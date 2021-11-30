/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x=0, a[32],b[32];
    cin>> n;

        for(int i=0 ; i<n ; i++)
        {
            cin>> a[i]>>b[i];
        }
        for(int i=0 ; i<n-1 ; i++)
        {
            if(a[i]==b[i+1])
                x++;
            if(b[i]==a[i+1])
            x++;

        }


    cout << x;
}
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x=0, a[32],b[32];
    cin>> n;

        for(int i=0 ; i<n ; i++)
        {
            cin>> a[i]>>b[i];
        }


        for(int j=1 ; j<n ; j++)
        {
            for(int i=0 ; i<n-j ; i++)
            {
                if(a[i]==b[i+j])
                    x++;
                if(b[i]==a[i+j])
                x++;

            }
        }



    cout << x;
}
