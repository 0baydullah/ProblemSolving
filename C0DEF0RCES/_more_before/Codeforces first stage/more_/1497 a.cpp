#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

void Sort(int a[101], int n);

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int sz , j=0;
        cin >> sz;
        int arr[101] , b[101];
        for(int i = 0 ; i < sz ; i++)
            cin >> arr[i];
        Sort(arr,sz);
        for(int i = 0 ; i < sz ; i++)
        {
            if(arr[i]!= arr[i+1])
            {
                cout << arr[i] << " ";
            }
            else
            {
                b[j] = arr[i];
                j++;
            }
        }
        for(int i = 0 ; i < j ; i++)
            cout << b[i] << " ";
        cout << endl;
    }

    return 0;
}

void Sort(int a[101], int n)
{
    int i, j, temp;
    for(i=0;i< n-1;i++)
    {
        for(j=i+1;j< n;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

