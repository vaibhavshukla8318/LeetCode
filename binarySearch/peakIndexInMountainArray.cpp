#include <iostream>
#include <vector>
using namespace std;

// 852. Peak Index in a Mountain Array
int peakIndexInMountainArray(vector<int>& arr) {
  int n= arr.size();
  int s = 0;
  int e = n - 1;
  int mid;
  while(s<e){
    mid = (s+e)/2;
    if(arr[mid]<arr[mid+1]){
      s = mid + 1;
    }else{
      e = mid;
    }
  }
  return s;
}
int main(){
  
  vector<int> arr = {0,2,1,0};
  int result = peakIndexInMountainArray(arr);
  cout << "Peak index in mountain array: " << result << endl;
  return 0;
}