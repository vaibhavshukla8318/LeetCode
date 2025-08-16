#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

// 11. Container With Most Water

int maxWaterContainer(vector<int>& height){
  int n = height.size();
  int i =0;
  int s = 0;
  int e = n-1;
  int minHeight = height[s];
  int maxWater = INT_MIN;
  while(s<e){
    minHeight = min(minHeight, height[e]);
    minHeight*=(n-i-1);
    maxWater = max(maxWater, minHeight);
    if(height[s] < height[e]){
      s++;
    } else {
      e--;
    }

    minHeight = height[s];
    i++;
  }
  return maxWater;
}
int main(){
  vector<int> arr = {1,8,6,2,5,4,8,3,7};
  int result = maxWaterContainer(arr);
  cout << "Maximum water that can be contained: " << result << endl;
  return 0;
}