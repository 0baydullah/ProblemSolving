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
            int s;
            s=a.size();
            int cnt {0};


            for (int i=0;i<a.size() ;i++ )
                if(a[i]!= '0')cnt++;


                cout <<cnt<<endl;

                for(int i=0; i<s ; i++)
                {
                    if(a[i] != '0')
                    {
                        cout << a[i];
                        int x = s-(i+1);
                        while (x--)
                            cout << '0';
                        cout << " ";
                    }

                }
                cout<<endl;

        }


    return 0;
}
