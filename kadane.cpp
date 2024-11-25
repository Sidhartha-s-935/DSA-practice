#include <iostream>
#include <vector>
using namespace std;

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
	int curr = arr[0], res = arr[0];
	for (int i = 1;i<arr.size();i++) curr = max(curr+arr[i], arr[i]); res = max(res, curr);
	cout<<res<<endl;
}
