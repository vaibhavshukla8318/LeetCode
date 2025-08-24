#include <bits/stdc++.h>
using namespace std;

int main(){

  // string  s = "GeEkS";
  // int num;
  // for(int i=0; i<s.length(); i++){
  //   num = s[i];
  //   cout << num << endl;
  // }

  // string s = "grrksfoegrrks";
  // char c1 = 'e';
  // char c2 = 'r';
  // for(int i = 0; i<s.length(); i++){
  //   if(s[i]==c1){
  //     s[i] = c2;
  //   }else if(s[i] == c2){
  //     s[i] = c1;
  //   }
  // }
  // cout << s;

  
  // bool value = true;

  //   cout << "Printing true value before boolalpha: "
  //        << value << endl;
  //   cout << "Printing true value after boolalpha: "
  //      << boolalpha  << value << endl;


  // vector<int> arr = {2,3,4,2,3,6,7,8};
  // set<int> s(arr.begin(), arr.end());
  // for(auto& i:s){
  //   cout << i << " ";
  // }

  // vector<int> arr = {10, 20, 10, 5, 15};
  // for(int i = 0; i<arr.size(); i++){
  //   if(i==0){
  //     arr[0] = arr[i];
  //   }
  //   arr[i+1] = arr[i] + arr[i+1];
  //   cout << arr[i] << " ";
  // }

  vector<int> arr = {10, 20, 10, 5, 15};
  int n = arr.size();
  int d = 3;
  for(int i = 0; i<d; i++){
    int swap = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = swap;
  }
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
  return 0;
}
