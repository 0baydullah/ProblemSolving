 #include "bits/stdc++.h"
 
 #define endl "\n"
 #define pb push_back
 
 #define PI acos(-1)
 #define gcd(a,b) __gcd(a,b)
 #define lcm(a,b) (a*b)/gcd(a,b)
 
 #define ll long long
 #define ull unsigned long long
 
 using namespace std;
 
 void miryoku()
 {
     bool tree = 0;
     int r,c; cin >> r >> c;
     char x;
     for(int i=0 ; i<r ; i++)
     {
        for(int j=0 ; j<c ; j++)
        {
            cin >> x;
            if(x=='^') tree =1 ;
        }
     }

     if((r<2 or c<2) and tree){
        cout << "Impossible" << endl;
        return;
     }
     else{
        cout << "Possible" << endl;
        if(tree)
        {
            for(int i=0 ; i<r ; i++)
            {
                for(int j=0 ; j<c ; j++)
                {
                    cout << '^';
                }cout << endl;
            }cout << endl;
        }
        else{
            for(int i=0 ; i<r ; i++)
            {
                for(int j=0 ; j<c ; j++)
                {
                    cout << '.';
                }cout << endl;
            }cout << endl;
        }
     }
 }
 
 int main()
 {
     ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
 
     int T=1;
     cin >> T;
     for(int t=1 ; t <= T ; t++){
       cout << "Case #" << t << ": ";
         miryoku();
     }
 
     return 0;
 }