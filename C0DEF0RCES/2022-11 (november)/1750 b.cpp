#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i=0 ; i<t ; i++)
    {
        int n; cin >> n;
        string a ; cin >> a;
        long long t1=0,t0=0 ,mx1=0 ,mx0=0;
        long long flag=1;
        for(int i=0 ; i<n ; i++){
            if(a[i]=='1') t1++;
            else t0++;
        }
        for(int i=1 ; i<n ; i++){
            if(a[i-1]=='0' and a[i]=='0'){
                flag++;
                mx0 = max(flag,mx0);
            }
            else flag=1;
        }
        if(mx0==0 and t0!=0) mx0=1;
        flag=1;
        for(int i=1 ; i<n ; i++){
            if(a[i-1]=='1' and a[i]=='1'){
                flag++;
                mx1 = max(flag,mx1);
            }
            else flag=1;
        }
        if(mx1==0 and t1!=0) mx1=1;

//       cout << mx1 << " " << mx0 << " " << t1 << " " << t0 << endl;

    long long ans = max({mx1*mx1,mx0*mx0,t1*t0});
        cout << ans << endl;

    }
    
}