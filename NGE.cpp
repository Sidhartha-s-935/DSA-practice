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
	int x = *max_element(arr.begin(),arr.end());
	for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == x) {
            cout << x << " -> " << -1 << endl;
        } else {
            bool flag = false;
            for (int j = i + 1; j < arr.size(); j++) {
                if (arr[i] < arr[j]) {
                    cout << arr[i] << " -> " << arr[j] << endl;
                    flag = true;
                    break;
		}
            }
            if (!flag) {
                cout << arr[i] << " -> " << -1 << endl;
            }
        }
    }
}
