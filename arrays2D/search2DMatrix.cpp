#include <iostream>
#include <vector>
using namespace std;

bool searchIn2DMatrix(vector<vector<int>> arr, int target){
    int m=arr.size(), n=arr[0].size();
    int r=0, c=0, rEnd=m-1, cEnd=n-1;

    while(r<=rEnd){
      int midR = (r+rEnd)/2;
      int midC = (c+cEnd)/2;

      if(arr[midR][0]<= target && arr[midR][cEnd]>= target){
        if(arr[midR][midC] == target){
          return true;
        }else if(arr[midR][midC]>target){
          cEnd = midC - 1;
        }else{
          c = midC + 1;
        }
      }else if(arr[midR][0]> target){
        rEnd = midR - 1;
      }else{
        r = midR + 1;
      }
    }
    return false;
}
int main(){

  vector<vector<int>> arr = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
  int target = 3;

  cout << searchIn2DMatrix(arr, target);
  return 0;
}