#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int a , b , c , d, res{0};
    cin >> a  >> b >> c >> d;
    string s;
    cin >> s;
    for(int i=0 ; i< s.size() ; i++)
    {
        if(s[i] == '1') res = res+(1*a);
        else if(s[i] == '2') res = res+ ( b);
        else if(s[i] == '3') res = res+ (c);
        else if(s[i] == '4') res = res+ (d);
    }

    cout << res;

    return 0;
}
