#include<bits/stdc++.h>
using namespace std;
 
int main(){
     int t ; cin >> t;
     while(t--)
     {
        int n; cin >> n;
        if(n==1) cout << 1 << endl;
        else if(n%3 == 0 || n%3 == 2)
        {
            int sum = 0;
            for(int i=0 ;i <n ; i++)
            {
                if(i%2){cout << 1; sum+=1;}
                else{cout<< 2 ; sum+=2;}
                if(n==sum) break;
            }
        }
        else
        {
            int sum = 0;
            for(int i=0 ;i <n ; i++)
            {
                if(i%2){cout << 2; sum+=2;}
                else{cout<< 1 ; sum+=1;}
                if(n==sum) break;
            }
        }
        cout << endl;
     }
}