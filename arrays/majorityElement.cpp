#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//169. Majority Element

int majorityElement(vector<int>& arr){
  int count = 0;
  int ans = 0;
  for(int i=0; i<arr.size(); i++){
    if(count==0){
      ans = arr[i];
    }
    if(ans == arr[i]){
      count++;
    }else{
      count--;
    }
  }
  return ans;
}

int main(){

  vector<int> arr = {2,2,2,2,2,2,3,3,3,1,3,3,1,3,3,1,3,3,1,3,3,3,1};
  cout << majorityElement(arr) << endl;

  return 0;
}