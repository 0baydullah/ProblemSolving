#include <iostream>
using namespace std;

int main()
{
    int n, solve = 0, task[3], i;

    cin >> n;

    while(n--)
    {
        for ( i = 0 ; i<3 ; i++)
        {
            cin >> task[i];
        }
        if( (task[0] == 1 && task[1] == 1 ) || (task[0] == 1 && task[2] == 1 ) || (task[1] == 1 && task[2] == 1 ))
            solve++;
    }
    cout << solve << endl;
}
