#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// 88. Merge Sorted Array
vector<int> mergeTwoSortedArray(vector<int>& arr1, vector<int>& arr2) {
  int n = arr1.size();
  int m = arr2.size();
  for(int i=0; i<m; i++){
    arr1[n-i-1] = arr2[m-i-1];
  }
  sort(arr1.begin(), arr1.end());
  return arr1;
}

int main(){
  vector<int> arr1 = {1,2,3,0,0,0};
  vector<int> arr2 = {2,5,6};
  mergeTwoSortedArray(arr1, arr2);

  for(int i=0; i<arr1.size(); i++){
    cout << arr1[i] << " ";
  }
  
  return 0;
}