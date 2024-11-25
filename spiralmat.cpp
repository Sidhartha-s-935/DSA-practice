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

vector<int> uzumaki(vector<vector<int>> mat) {
 
  	vector<int> ans;
 
  	int n = mat.size();
  	int m = mat[0].size();  
  	int top = 0, left = 0, bottom = n - 1, right = m - 1;

  	while (top <= bottom && left <= right) {
    		for (int i = left; i <= right; i++) ans.push_back(mat[top][i]);
   	top++;

    	for (int i = top; i <= bottom; i++) ans.push_back(mat[i][right]);
    	right--;

    	if (top <= bottom) {
      		for (int i = right; i >= left; i--) ans.push_back(mat[bottom][i]);
      		bottom--;
    	}
    	if (left <= right) {
      		for (int i = bottom; i >= top; i--) ans.push_back(mat[i][left]);
      		left++;
    	}
	}
  return ans;
}

int main() {
  	int n;
        int m;
	cout<<"Enter matrix dimensions"<<endl;
	cin>>n;
	cin>>m;
	vector<vector<int>> matrix(n,vector<int>(m,0));
	cout<<"Enter the values of the matrix"<<endl;
	for (int i = 0;i<n;i++){
		for (int j = 0;j<m;j++){
			int y = 0;
			cin>>y;
			matrix[i][j] = y;
		}
	}
	cout<<"The matrix"<<endl;
	for (int i = 0;i<n;i++){
		for (int j = 0;j<n;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	vector<int> ans = uzumaki(matrix);
	cout<<"The Spiral matrix is: "<<endl;	
  	for(int i = 0;i<ans.size();i++){      
      		cout<<ans[i]<<" ";
  	}
 	cout<<endl;  
}

