#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {

        int r , c;
        cin >> r >> c;
        vector <string> v(c),a(c), b(c);
        while(r--)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        for(int i=0 ; i<c ; i++)
        {
            for (int j =0 ; i<r ; i++)
            {
                if(i%2 == j%2)
                {
                    a[i][j] == 'W';
                    b[i][j] == 'R';
                }
                else
                {
                    a[i][j] == 'R';
                    b[i][j] == 'W';
                }
            }
        }

        for(int i=0 ; i<c ; i++)
        {
            for (int j =0 ; j<r ; j++)
            {
                if(a[i][j] == v[i][j]  || a[i][j] == '.'){}
                else
                {
                    for(int k=0 ; k<c ; k++)
                    {
                        for (int l =0 ; l<r ; l++)
                        {
                            if(b[k][l] == v[k][l]  || b[k][l] == '.'){}
                            else
                            {
                                cout << "No" << endl;
                            }
                        }
                    }
                    cout << "YES" <<endl;
                    // lollllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll

                    for(int x=0 ; x<c ; x++)
                    {
                        for (int y =0 ; y<r ; y++)
                        {
                            cout  << b[x][y] ;
                        }
                        cout << endl;
                    }

                    //lolllllllllllllllllllllllllllllllllllllllllllllllllllllllllll
                }

            }
        }
        cout << "YES" <<endl;
        // lollllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll

                    for(int x=0 ; x<c ; x++)
                    {
                        for (int y =0 ; y<r ; y++)
                        {
                            cout  << b[x][y] ;
                        }
                        cout << endl;
                    }

                    //lolllllllllllllllllllllllllllllllllllllllllllllllllllllllllll
    }

    return 0;
}
