#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <queue>
#include <stack>

#define pb push_back
#define pf push_front


using namespace std;
int input[32];
int code[32];

int hamming(int position,int c_l)
{
int count=0,i,j;
i=position-1;
while(i<c_l)
{
for(j=i;j<i+position;j++)
{
if(code[j] == 1)
count++;
}
i=i+2*position;
}
if(count%2 == 0)
return 0;
else
return 1;
}

int main()
{
int n,i,p_n = 0,c_l,j,k;
cout << "Enter Data Words Length : ";
cin >> n;
cout << endl;
cout << "Enter Data Word : ";
for(i=0;i<n;i++)
cin >> input[i];

i=0;
while(n>(int)pow(2,i)-(i+1))
{
p_n++;
i++;
}

c_l = p_n + n;

j=k=0;
for(i=0;i<c_l;i++)
{

if(i==((int)pow(2,k)-1))
{
code[i]=0;
k++;
}
else
{
code[i]=input[j];
j++;
}
}
for(i=0;i<p_n;i++)
{
int position = (int)pow(2,i);
int value = hamming(position,c_l);
code[position-1]=value;
}
cout <<"Actual Code Word : ";
for(i=0;i<c_l;i++)
printf("%d",code[i]);
cout << endl;
cout << "Recived Code Word : ";
for(i=0;i<c_l;i++)
cin >> code[i];

int error_pos = 0;
for(i=0;i<p_n;i++)
{
int position = (int)pow(2,i);
int value = hamming(position,c_l);
if(value != 0)
error_pos+=position;
}
if(error_pos == 0)
cout << "Received Code Word is correct.\n";
else
{
cout << "Error in Code Word's Bit Position: " <<error_pos << endl;
}
}
