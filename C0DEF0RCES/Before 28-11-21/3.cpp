#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

vector<int> v;


int main()
{
	string letter; 
	cin >> letter;
	if(letter[0] > 'Z')
		letter[0] -= 32;
	cout << letter;
}