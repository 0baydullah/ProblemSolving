///I hate that I love that
#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x==1)
    {
        cout << "I hate it";
        return 0;
    }
    for (int i=1; i<=x; i++)
    {
        i%2==0 ? cout << "I love " : cout << "I hate ";
        i==x ? cout << "it" : cout << "that ";
    }
}

