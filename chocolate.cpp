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
	sort(arr.begin(),arr.end());
	int i = 0, j = 0;
	int k;
	cout<<"Enter students: "<<endl;
	cin>>k;
	int minn = INT_MAX;

    	for (int i = 0; i + k - 1 < n; i++) {
        	int diff = arr[i + k - 1] - arr[i];
        	if (diff>0 && diff < minn)
            		minn = diff;
    	}
    	cout<<"Minimum Difference: "<<minn<<endl;
}

