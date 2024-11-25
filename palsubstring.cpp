//HEADERS
#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <climits>

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------

//NAMESPACES

using namespace std;

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------

int main(){
	string s;
	cout<<"Enter String: ";
	cin>>s;
	int n = s.size();
	n = n/2;
	int i = n, j = n;
	while (true){
		if (i==j && i-1>=0 && j+1<s.size()) i--; j++;
		else if (s[i] == s[j] && i-1>=0 && j+1<s.size()) i--; j++;
	}
	string x = (s.begin()+i, s.end()-j);
	cout<<x<<endl;
}
