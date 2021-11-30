#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    vector <pair<string,string>> v(n);
    for(int i = 0 ; i<n ; i++)
        cin >> v[i].first >> v[i].second;
    sort(v.begin(),v.end());

    int siZe = unique(v.begin(),v.end()) - v.begin();
    cout << siZe << fuckl;

    return 0;
}
