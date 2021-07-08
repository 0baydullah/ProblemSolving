#include <iostream>
using namespace std;
 
bool flag(int n);
 
int main()
{
    int l, r;
    cin >> l >> r;
    for(int i = l; i <= r; i++)
    {
        if(flag(i))
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}

bool flag(int n)
{
    int dig[10] = {0}, i;
    while(n != 0)
    {
        dig[n % 10]++;
        n /= 10;
    }
    for(i = 0; i < 10; i++)
    {
        if(dig[i] > 1) return false;
    }
    return true;
}