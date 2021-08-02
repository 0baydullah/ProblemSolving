#include<iostream>
using namespace std;
 
int main()
{
    int n,i;
    cin>>n;
    string s;
    cin>>s;
    int xc=0;
    for(i=0;i<s.size()-2;i++){
    
    if(s[i]=='x'&&s[i+1]=='x'&&s[i+2]=='x')xc++;
    
    
    }
    
    cout<<xc<<endl;
   
}