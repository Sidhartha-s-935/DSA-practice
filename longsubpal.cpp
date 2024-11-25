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

string expand(int left, int right,string s) {
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        left--;
        right++;
    }
    return s.substr(left + 1, right - left - 1);
};

int main(){
  string s;
  cout<<"Enter String: ";
  cin>>s;
  string ans = string(1,s[0]);
  if (s.size()<=1) return string(1,s[0]);

  for (int i = 0;i<s.size()-1;i++){
      string odd = expand(i,i,s);
      string even = expand(i,i+1,s);
      cout<<odd<<" "<<even<<endl;
      if (odd.size()>ans.size()) ans = odd;
      if (even.size()>ans.size()) ans = even;
  }
  cout<<ans;
}
