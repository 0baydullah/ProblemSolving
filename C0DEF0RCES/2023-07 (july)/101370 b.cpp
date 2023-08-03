#include <bits/stdc++.h>
using namespace std;


void solve(){
    string s, temp; cin>>s;
    int res=0;
    while(s.size()>1){
        int cnt=0;
        for(int i=0; s[i]!=0; i++) if(s[i]!='0') cnt++;

        if(cnt>2){
            res+=(s.back()-'0'); 
            s.pop_back(); s.push_back('0');
        }
        else{
            if(s.back()!='0'){
                res+=((s.back()-'1'));
                s[s.size()-1]='1';
            }
        }

        temp=s;
        sort(temp.begin(), temp.end());

        if(temp[0]=='0'){
            for(int i=0; temp[i]!=0; i++){
                if(temp[i]!='0'){
                    swap(temp[i], temp[0]); break;
                }
            }
        }

        if(temp!=s){
            s=temp; res++;
        }
        else{
            if(s.back()=='0') res++;
            else res+=(s[s.size()-1]-'0')+1;
            temp="";
            if(s[0]>'1') temp+=s[0]-1;
            for(int i=0; i<s.size()-1; i++) temp+='9';
            s=temp;
        }
    }

    if(s[0]!='1') res+=(s[0]-'1');

    cout<<res<<endl;
}

int main(){
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	int t; cin >> t;
	while(t--) solve();
}

// In this problem there written 1 on the board.In one operation this number can be increased or can rearrenge the digits of the number arbitrarily.The desire task is how many operation at least needed to make given number.