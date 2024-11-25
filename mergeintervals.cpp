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
	vector<vector<int>> arr;
	int n = 0;
	cout<<"Enter no. of intervals"<<endl;
	cin>>n;
	for (int i = 0;i<n;i++){
		int x,y;
		cout<<"Enter start"<<" ";
		cin>>x;
		cout<<"Enter end ";
		cin>>y;
		arr.push_back({x,y});
	}
	vector<vector<int>>res;
    	sort(arr.begin(),arr.end());
    	for(int i = 0; i < arr.size(); i++){
        	if(res.empty() || res.back()[1] < arr[i][0]){
            		res.push_back(arr[i]);
        	}
        	else res.back()[1]= max(res.back()[1], arr[i][1]);
    	}
    	for (int i = 0;i<res.size();i++){
		for (int j = 0;j<res[0].size();j++) cout<<res[i][j]<<" ";
	}
	cout<<endl;
}	

