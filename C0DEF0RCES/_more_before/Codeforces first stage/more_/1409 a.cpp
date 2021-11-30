#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin>> t;

    while(t--)
    {
        int a, b;
        cin >> a >> b;
          if (abs(a-b)%10==0)
            cout << (abs(a-b)/10) <<endl;
          else if(abs(a-b)%10!=0) cout << (abs(a-b)/10)+1 <<endl;
          else cout << "0" <<endl;
    }

    return 0;
}
