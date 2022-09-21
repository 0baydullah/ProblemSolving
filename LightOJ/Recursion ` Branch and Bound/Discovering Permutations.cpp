#include "bits/stdc++.h"
#define endl "\n"
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    for  (int x = 1; x <= t ; x++)
    {
        cout << "Case " << x <<":" << endl;
        int n , k , c = 0;
        cin >> n >> k;
        string s;
        for(int i = 0 ; i < n ; i++) s += 'A'+i;

        do
        {
            cout << s << endl;
            c++;
            if(c==k) break;
            
        } while (next_permutation(s.begin(),s.end()));
    }
}