#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    set <int> s;
    int n;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    (s.size() == 1) ? cout<< "NO" << endl : cout << *(++s.begin()) << endl;

    return 0;
}
