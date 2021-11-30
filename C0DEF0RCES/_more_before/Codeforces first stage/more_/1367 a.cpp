#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string a;
        cin >> a;
          cout << a[0];

        for(int i= 1 ; i<a.size() ; i++)
        {
            if(a[i] == a[i+1])
                cout << a[i];
            else{ cout << a[i]; if( a[i+1] >= 'a'&& a[i+1] <= 'z') cout<< a[i+1];}
            i++;
        }
        cout << endl;
    }


    return 0;
}
