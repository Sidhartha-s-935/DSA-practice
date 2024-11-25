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
	unordered_set<int> st;
  for (int i = 0;i<nums.size();i++){
      st.insert(nums[i]);
  }
  int ans = 0;
  for (int i = 0;i<nums.size();i++){
      if (st.find(nums[i]-1) == st.end()){
          int num = nums[i];
          int cnt = 0;
          while(st.find(num+1)!=st.end()){
              cnt++;
              num++;
          }
          ans = max(cnt,ans);
      }
  }
  for (int i = 0;i<ans.size();i++) cout<<ans[i]<<endl;
}
