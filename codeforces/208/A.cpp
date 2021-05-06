#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    string a;
    cin >> a;
    regex x("WUB");
    cout << regex_replace(a,x," ");

    return 0;
}
