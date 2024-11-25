//HEADERS
#include <algorithm>
#include <iostream>
#include <vector>
#include <climits>

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------

//NAMESPACES

using namespace std;

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------

int main(){
	vector<int> arr;
	int x = 0;
	cout<<"Enter array size"<<endl;
	cin>>x;
	for (int i = 0;i<x;i++){
		int y = 0;
		cout<<"Enter value"<<i<<" ";
		cin>>y;
		arr.push_back(y);
	}

	vector<int> left;
	vector<int> right;
	int m = 0;
	int n = arr.size();
	for (int i =0;i<n;i++){
		left.push_back(m);
		if (arr[i]>m) m = arr[i];
	}
	m = 0;
	for (int i = n-1;i>=0;i--){
		right.push_back(m);
		if(arr[i]>m) m = arr[i];
	}
	m = 0;
	reverse(right.begin(),right.end());
	for (int i = 0;i<right.size();i++) cout<<left[i]<<" "<<right[i]<<endl;
	for (int i = 0;i<arr.size();i++){
		int minn = min(left[i],right[i]);
		m += max(0, minn-arr[i]);
	}
	cout<<"Stagnated water: "<<m<<endl;
	
}
