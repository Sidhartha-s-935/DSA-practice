//HEADERS

#include <iostream>
#include <vector>
#include <climits>

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------

//NAMESPACES

using namespace std;

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------

int main(){
	vector<int> arr;
	int n = 0;
	cout<<"Enter array size"<<endl;
	cin>>n;
	for (int i = 0;i<n;i++){
		int y = 0;
		cout<<"Enter value"<<i<<" ";
		cin>>y;
		arr.push_back(y);
	}

	int leftprod = 1;
	int rightprod = 1;
	int maxprod = INT_MIN;
	for (int i = 0;i<arr.size();i++){
		if (leftprod == 0) leftprod = 1;
		if (rightprod == 0) rightprod = 1;
		leftprod *= arr[i];
		int j = arr.size()-i-1;
		rightprod *= arr[j];
		int prod = max(leftprod, rightprod);
		maxprod = max(prod, maxprod);
	}
	cout<<maxprod<<endl;
	
}
