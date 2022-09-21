#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

   // ll t; cin >> t; while(t--)
    {
        int n, a, b , c , d;
        cin >> n >> a >> b >> c >> d;
      //  string s;
       // for(int i=1 ; i<=n ; i++)
        {
     //       s.pb(i+'0');
        }
    //    reverse(s.begin()+a-1,s.begin()+b);
    //    reverse(s.begin()+c-1,s.begin()+d);
    //    cout << s[0];
    //    for(int i=1 ;i<s.size() ; i++)
   //     {
    //        cout <<" " << s[i] ;
     //   }cout << endl;

     int arr[n+1];
     for(int i=1 ; i<=n ;i++)
        arr[i]=i;
     for( int i=1 ;i<a ; i++)
        cout << arr[i] << " ";
     for(int i=b ; i>=a ; i--)
        cout << arr[i] << " ";
    for(int i=b+1 ; i<c ; i++)
        cout << arr[i] << " ";
     for(int i=d ; i>=c ; i--)
        cout << arr[i] << " ";
   //  for(int i=d+1 ; i<=n ; i++)
    //    cout <<  arr[i] << " ";
   //  cout << endl;
    }

    return 0;
}
