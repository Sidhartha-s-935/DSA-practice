//HEADERS

#include <iostream>
#include <vector>
#include <climits>

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------

//NAMESPACES

using namespace std;

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------

int main(){
	vector<int> nums;
	int n = 0;
	cout<<"Enter array size"<<endl;
	cin>>n;
	for (int i = 0;i<n;i++){
		int y = 0;
		cout<<"Enter value"<<i<<" ";
		cin>>y;
		nums.push_back(y);
	}
	int i = 0;
        int j = nums.size()-1;
        int ans = 0;
        while(i<j){
            ans = max(ans, (j-i)*min(nums[j],nums[i]));
            if (nums[i]<nums[j]) i++;
            else j--;
        }
        cout<<"Max water: "<<ans<<endl; 
}
