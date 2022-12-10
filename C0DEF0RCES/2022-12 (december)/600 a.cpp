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

   string s,t="";
    cin>>s;
 
    vector<string>a,b;
 
    bool f1=true,f2=true,first=true;
 
    for(int i=0; i<s.size(); i++)
    {
 
        if(s[i]==','||s[i]==';')
        {
            
 
            if(f1 && t.size())
            {
                a.push_back(t);
            }
            else
                b.push_back(t);
            //}
            f1=true;
            f2=true;
            first=true;
            t="";
 
            if(i+1==s.size())
                b.push_back(t);
            continue;
        }
 
        if(f2 && s[i]=='0' && first)
        {
            f2=false;
            t+=s[i];
            first=false;
 
            if(i+1==s.size())
            {
                if(f1)
                {
                    a.push_back(t);
                }
                else
                    b.push_back(t);
            }
 
            continue;
        }
 
        first=false;
 
        if(f2==false  && s[i]>='0' && s[i]<='9')
            f1=false;
 
        if(s[i]>='0' && s[i]<='9') {}
        else
            f1=false;
        t+=s[i];
 
 
        if(i+1==s.size())
        {
            if(f1)
            {
                a.push_back(t);
            }
            else
                b.push_back(t);
        }
 
    }
 
 
    if(a.size())
        cout<<"\"";
    else
        cout<<"-"<<endl;
 
    for(int i=0; i<a.size(); i++)
    {
        if(i+1<a.size())
            cout<<a[i]<<",";
        else
            cout<<a[i];
    }
 
    if(a.size())
        cout<<"\""<<endl;
 
    if(b.size())
        cout<<"\"";
    else
        cout<<"-"<<endl;
    for(int i=0; i<b.size(); i++)
    {
        if(i+1<b.size())
            cout<<b[i]<<",";
        else
            cout<<b[i];
    }
 
    if(b.size())
        cout<<"\"";
 

    return 0;
}