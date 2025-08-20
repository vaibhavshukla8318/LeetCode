#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// 75. Sort Colors
void sortColors(vector<int>& nums){
  int n = nums.size();
  int s = 0;
  int e = n-1;
  int i = 0;
  while(i<=e){
    if(nums[i]  == 0){
      swap(nums[i], nums[s]);
      i++;
      s++;
    }else if(nums[i]==1){
      i++;
    }else{
      swap(nums[e], nums[i]);
      e--;
    }
  }
}
int main(){

  vector<int> arr = {2,0,2,1,1,0};
  sortColors(arr);
  for(int i = 0; i < arr.size(); i++){
    cout << arr[i] << " ";
  }

  return 0;
}