#include<bits/stdc++.h>
using namespace std;


void bal(string s){
    int n=s.size();
    for(int i=0 ; i<n; i++){
        if(s[i]=='1') cout << i+1 << " " << i+1 <<endl;
    }
}
void chal(string s){
    int n=s.size();
    for(int i=0 ; i<n; i++){
        if(s[i]=='1') cout << i+1 << " " << i+1 <<endl;
    }
    cout << "1 1" << endl;
    cout << "2 " << s.size() << endl;
    cout << "1 " << s.size() << endl;
}

int main(){
    int t;
    cin >> t;
    for (int i=0 ; i<t ; i++)
    {
        int n; cin >> n;
        string a,b; cin >> a >> b;

        bool answer=1;
        bool x=(a[0]-'0')^(b[0]-'0');
        for(int i=1 ;i<n; i++){
            if(((a[i]-'0')^(b[i]-'0'))!=x)
            {
                answer=0;
                cout << "NO\n";
                break;
            }
        }
        if(answer){
            int one=0;
            cout << "YES\n";
            for(int i=0 ; i<n ;i++){
                if(a[i]=='1') one++;
            }
            if(x){
                if(one&1){
                    cout << one << endl;
                    bal(a);
                }else{
                    cout << one+3 << endl;
                    chal(a);
                 }
            }else{
                if(!(one&1)){
                    cout << one << endl;
                    bal(a);
                }else{
                    cout << one+3 << endl;
                    chal(a);
                 }
            }
            
        }

    }
    
}