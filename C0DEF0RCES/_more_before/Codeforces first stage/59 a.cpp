#include <iostream>
#include <string.h>
#include <string>
using namespace std;

 int main()
 {
     char s[100];
     int u=0 ,l=0, i;
     gets(s);

     for ( i = 0; i < strlen(s) ; i++)
         s[i] >= 'A' && s[i] <= 'Z' ? u++ : l++;
     l >= u ? strlwr(s) : strupr(s);

     cout<< s << endl;
 }
