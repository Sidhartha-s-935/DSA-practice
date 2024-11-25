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

  vector<int> ans = {0,0};
  for (int i = 0;i<n;i++){
    int cnt = count(matrix[i].begin(),matrix[i].end(),1);
    if (cnt>ans[1]){
      ans[0] = i;
      ans[1] = cnt;
    }
  } 

  for (int i = 0;i<2;i++){
    cout<<ans[i]<<endl;
  }

}
