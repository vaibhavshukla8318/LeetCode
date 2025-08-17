#include <iostream>
#include <vector>
using namespace std;

// 33. Search in Rotated Sorted Array
int searchRotatedSortedArray(vector<int>& arr, int target) {
  int n = arr.size();
  int s = 0;
  int e = n - 1;
  int mid;
  while(s<=e){
    mid = (s+e)/2;
    if(arr[mid] == target){
      return mid;
    }else if(arr[s]<= arr[mid]){
      if(arr[mid]>=target && arr[s]<=target){
        e = mid - 1;
      }else{
        s = mid+1;
      }
  }else{
    if(arr[mid]<=target && arr[e] >=target){
      s = mid + 1;
    }else{
      e = mid - 1;
    }
  }
}
return -1;
}
int main(){

  vector<int> arr = {4,5,6,7,0,1,2};
  int target = 0;
  int result = searchRotatedSortedArray(arr, target);
  cout << "Target found at index: " << result << endl;
  return 0;
}