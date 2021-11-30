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
        int n, m;
        cin >> n >> m;
        char a[n];
        gets(a);
        while(m--)
        {
            vector <int> v;
            for(int i=0 ; i<m ; i++)
            {
                if((a[i]== '0') /* && (a[i-1] == '1' || a[i+1] == '1')&& (!(a[i-1] == '1' && a[i+1] == '1'))*/)
                {
                    if ((a[i-1] == '1' || a[i+1] == '1') && (a[i-1] == '0' || a[i+1] == '0'))
                    {

                        v.push_back(i);
                    }
                }

            }
            for(int i=0; i<v.size() ; i++)
            a[v[i]]='1';
        }
        cout << a << endl;

    }


    return 0;
}
