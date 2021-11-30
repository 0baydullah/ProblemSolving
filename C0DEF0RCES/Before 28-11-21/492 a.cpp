#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int n,i;
    cin >> n;
    int cnt {0};
    for( i=1 ; n>=0 ; i++)
    {
        n = n-(((i+1) *i)/2);
        cnt++;
    }
        cout << cnt-1;

    return 0;
}
·.★·.·´¯`·.·★ 🅺🅰🅻🅰 🅼🅾🆁🅾🅶 ★·.·´ FυCКЄЯ
꧁𓊈𒆜🅺🅰🅻🅰 🅼🅾🆁🅾🅶𒆜𓊉꧂
☞ó ͜つò☞ 𝓚𝓪𝓵𝓪-𝓜𝓸𝓻𝓸𝓰 ☞ó ͜つò☞ 𝓕𝓾𝓬𝓚𝓮𝓻 (人◕‿◕) 𝔽𝕦𝕔𝕂𝕖𝕣 (•◡•)
