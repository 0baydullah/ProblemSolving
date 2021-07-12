#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int i,cnt{0};
    cin >> i;
    while(i--)
    {
        char a;
        cin >> a;
        if(a == '-' && cnt != 0) cnt--;
        else if(a== '+') cnt++;
    }cout << cnt << endl;

    return 0;
}
