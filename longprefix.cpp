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


string longpre(vector<string>& arr) {
    	int n = arr.size();
    	if (n == 0) return "-1";

    	sort(arr.begin(), arr.end());

    	string first = arr[0];
    	string last = arr[n - 1];
    	string result = "";

    	for (int i = 0; i < first.length(); i++) {
        	if (first[i] == last[i]) result += first[i];
        	else break;
    	}

    	return (result == "") ? "-1" : result;
}

int main() {
    	vector<string> arr;
	cout<<"Enter no. of elements: "<<endl;
	int n;
	cin>>n;
	for (int i = 0;i<n;i++){
		cout<<"Enter string "<<i<<" ";
		string s;
		cin>>s;
		arr.push_back(s);
	}
	cout<<"Longest Common Prefix: "<<longpre(arr)<< endl;



}	

