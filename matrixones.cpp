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
        int col0 = 1;
    
    	for (int i = 0; i < n; i++) {
        	for (int j = 0; j < m; j++) {
            		if (matrix[i][j] == 1) {
                		matrix[i][0] = 0;
                		if (j != 0)
                    			matrix[0][j] = 0;
                		else
                    			col0 = 0;
			}
        	}
    	}

    	for (int i = 1; i < n; i++) {
        	for (int j = 1; j < m; j++) {
            		if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                		matrix[i][j] = 1; 
            		}
        	}
    	}

    	if (matrix[0][0] == 0) {
        	for (int j = 0; j < m; j++) {
            		matrix[0][j] = 1;
        	}
    	}

    	if (col0 == 0) {
        	for (int i = 0; i < n; i++) {
            		matrix[i][0] = 1;
        	}
    	}

    	cout<<"Final Matrix"<<endl;	
	for (int i = 0;i<n;i++){
		for (int j = 0;j<n;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}
