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

	int target = 0;
	cout<<"Enter target to search"<<" ";
	cin>>target;
	int low = 0;
	int flag = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                cout<<mid<<endl;
		flag = 1;	
		break;
            }
            else if (nums[low]<= nums[mid]){
                if (nums[low]<=target && target<=nums[mid]) high = mid-1;
                else low = mid+1;
            }
            else if (nums[high]>=nums[mid]){
                if (nums[high]>=target && target>=nums[mid]) low = mid+1;
                else high = mid-1;
            }
        }
	if (flag == 0) cout<<"Key not found"<<endl;
}
