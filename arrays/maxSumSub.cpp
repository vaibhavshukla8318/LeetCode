#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int maxSumSubArray(vector<int>& arr){

  int sum = 0;
  int ans = INT_MIN;
  for(int i=0; i<arr.size(); i++){
     sum+=arr[i];
     ans = max(ans, sum);
     if(sum<0){
      sum = 0;
     }
  }
  return ans;
}

int main(){

  vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
  cout << maxSumSubArray(arr) << endl;
  return 0;
}