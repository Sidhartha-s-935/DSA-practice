//HEADERS

#include <iostream>
#include <vector>
#include <climits>

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------

//NAMESPACES

using namespace std;

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------

void multiply(vector<int>& result, int num) {
    int carry = 0;
    for (int i = 0; i < result.size(); i++) {
        int prod = result[i] * num + carry;
        result[i] = prod % 10; 
	carry = prod / 10; 
    }
    
    while (carry) {
        result.push_back(carry % 10);
        carry /= 10;
    }
}

void factorial(int n) {
    vector<int> result(1, 1);     
    for (int i = 2; i <= n; i++) {
        multiply(result, i); 
    }
    
    cout << "Factorial: ";
    for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i];
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    factorial(n);
}
