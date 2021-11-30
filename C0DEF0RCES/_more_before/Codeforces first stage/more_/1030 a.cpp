#include<iostream>
using namespace std;

int main()

{
    int n;
    cin >> n;
    int magnet, prev_magnet=0,flag=0;

    for (int i = 0 ; i<n ; i++)
    {
        cin>> magnet;

        if (magnet == 1)
        {
             cout<< "HARD";
             return 0;
        }

    }


    cout<< "EASY";

}

