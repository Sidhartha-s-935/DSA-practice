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
	cout<<"Enter string of paranthesis"<<endl;
	cin>>s;
	stack<char> st;
	bool flag = true;
	for (int i = 0;i<s.size();i++){
		char c = s[i];
		if (c == '(' || c == '[' || c == '{') st.push(s[i]);
		else{
			if (st.empty() || (c == ')' && st.top() != '(') || (c == '}' && st.top() != '{') ||(c == ']' && st.top() != '[')){
				flag = false; 
				break;
			}
			else st.pop();
		}
	}
	if (flag && st.empty()) cout<<"Valid Paranthesis"<<endl;
	else cout<<"Invalid Paranthesis"<<endl;

}
