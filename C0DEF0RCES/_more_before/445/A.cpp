#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
 int al,bb;
int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int a,b;
    cin >> a>>b;
    for (int i=0 ; i<a ;i++)
    {
        string a;
        cin >> a;
        if (i%2==0)
        {
            for(int j=0 ; j<a.size() ; j++)
            {
                if (a[j]=='.' && j%2==0) a[j]='B';
                else if (a[j]=='.' && j%2!=0) a[j]='W';
            }
        }
        else
        {
            for(int j=0 ; j<a.size() ; j++)
            {
                if (a[j]=='.' && j%2==0) a[j]='W';
                else if (a[j]=='.' && j%2!=0) a[j]='B';
            }
        }
        cout<<a<<endl;
    }


    return 0;
}