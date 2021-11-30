#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int cnt;
int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    vector<int>a(n);

    for(int i = 0 ; i < n ; i++)
    cin >> a[i];

    sort(a.begin(),a.end());
    unique(a.begin(),a.end());

    int last_index=0;

    for(int i = 1 ; i <= a.size() ; i++)
        for(int j = last_index; j < a.size() ; j++)
            if (i==a[j])
            {
                last_index = j+1;
                cnt++;
                break;
            }

    cout << cnt << endl;


    return 0;
}


