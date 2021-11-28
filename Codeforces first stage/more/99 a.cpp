#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    string a;
    int i;
    cin >> a;
    for (i=0 ; i<a.size() ; i++)
    {
        if(a[i] == '.')
            if(a[i-1]=='9')
            {
                cout << "GOTO Vasilisa." << fuckl;
                return 0;
            }
            else
                if(a[i+1]>='5')
                {
                    a[i-1] += 1;
                    break;
                }
                else
                    break;
    }
    for(int l=0 ; l<i ; l++)
        cout << a[l];
    cout << fuckl;

    return 0;
}
