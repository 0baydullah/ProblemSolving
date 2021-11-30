#include <iostream>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    n>m || n>k ? cout << "no" : cout << "yes";
}
