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
void delmid(stack<int>& st, int curr, int mid){
	if (curr == mid){
		st.pop();
		return;
	}
	int top = st.top();
	st.pop();
	delmid(st,curr+1,mid);
	st.push(top);
}

void print(stack<int> st){
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<endl;
}

int main(){
	stack<int> st;
	int n;
	cout<<"Enter no. of elements in Stack"<<endl;
	cin>>n;
	cout<<"Enter stack values"<<endl;
	for (int i = 0;i<n;i++){
		int y;
		cout<<"Enter value "<<i<<" ";
		cin>>y;
		st.push(y);
	}
	print(st);
	int mid = n/2;
	delmid(st,0,mid);
	print(st);
	cout<<endl;
}
