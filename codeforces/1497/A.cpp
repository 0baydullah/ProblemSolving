#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

void bSort(int arr[] , int sz);

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int sz ,temp,j=0;
        cin >> sz;
        int arr[sz],a[101] ,b[101];
        for(int i = 0 ; i < sz ; i++)
            cin >> arr[i];
       // bSort (arr,sz);
        sort(arr,arr+sz);
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

void bSort (int arr[] , int sz)
{
     for (int step = 0; step < (sz-1); ++step)
     {
        for (int i = 0; i < sz - (step-1); ++i)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}
