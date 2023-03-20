#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        int n;
        cin >> n;
        int clod[n],dope[n];
        for(int i=0 ; i<n; i++)cin >> clod[i];
        for(int i=0 ; i<n; i++)cin >> dope[i];
        int score_clod{0},score_dope{0};
        bool flag=0;
        // if(n<3){
        //     for(int i=0 ; i<n; i++){
        //         if(clod[i]==6) flag=1;
        //         if(flag)score_clod+=clod[i];
        //     }
        //     flag=0;
        //     for(int i=0 ; i<n; i++){
        //         if(dope[i]==6) flag=1;
        //         if(flag)score_dope+=dope[i];
        //     }
        //     if(score_clod>score_dope) cout << "Clod\n";
        // else if (score_clod<score_dope) cout << "Dope\n";
        // else cout << "Draw\n";
        // }
         //else{
            for(int i=0 ; i<n; i++){
            if(clod[i]==6 && clod[i+1]==6 && clod[i+2]==6){
                i+=2;
            }else if((!(clod[i]==6 && clod[i+1]==6 && clod[i+2]==6)) && clod[i]==6){
                flag=1;
                if(flag) score_clod += clod[i];
            }else{
                if(flag) score_clod += clod[i];
            }
        }
        flag = 0;
        for(int i=0 ;i<n; i++){
            if(dope[i]==6 && dope[i+1]==6 && dope[i+2]==6){
                i+=2;
            }else if((!(dope[i]==6 && dope[i+1]==6 && dope[i+2]==6)) && dope[i]==6){
                flag=1;
                if(flag) score_dope += dope[i];
            }else{
                if(flag) score_dope += dope[i];
            }
        }
        if(score_clod>score_dope) cout << "Clod\n";
        else if (score_clod<score_dope) cout << "Dope\n";
        else cout << "Draw\n";
      //  }
        
    }

    return 0;
}