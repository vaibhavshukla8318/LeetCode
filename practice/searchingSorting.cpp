#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


vector<vector<int>> sort2D(vector<vector<int>>& arr){
  for(int i =0; i<arr.size(); i++){
    sort(arr[i].begin(), arr[i].end());
  }
  return arr;
}
int main(){

  // string s = "geeksforgeeks";
  // sort(s.begin(), s.end());
  // cout << s;

  // vector<vector<int>> arr = {{77, 11, 22, 3}, {11, 89, 1, 12}};
  // vector<vector<int>> ans = sort2D(arr);

  // for(int i = 0; i<ans.size(); i++){
  //   for(int j = 0; j<ans[i].size(); j++){
  //     cout << ans[i][j] << " ";
  //   }
  //   cout << endl;
  // }


//   vector<int> arr = {3,5,4,2,6,7};
//   sort(arr.begin(), arr.end());

//  for(int i = arr.size()-1; i>=0; i--){
//   cout <<arr[i] << " ";
//  }



//  vector<int> arr = {1,0,1,2,1,0,2};
//  sort(arr.begin(), arr.end());
//  for(int i = 0; i<arr.size(); i++){
//   cout << arr[i] << " ";
//  }

// for(int i = 0; i<arr.size(); i++){

// }
// int  n= arr.size();
// int s = 0;
// int e = n-1;
// int i = 0;
// while(i<=e){
//   if(arr[i] == 0){
//     swap(arr[i], arr[s]);
//     i++;
//     s++;
//   }else if(arr[i]==1){
//     i++;
//   }
//   else{
//     swap(arr[i], arr[e]);
//     e--;
//   }
// }

// for(int i =0; i<n; i++){
//   cout << arr[i] << " ";
// }

vector<int> arr = {4,5,6,7,3,2,1};
int element = 3;
int n = arr.size();
int s = 0;
int e = n-1;
int mid;
while(s<e){
  mid = (s+e)/2;
  if(arr[mid]==element){
    return mid;
  }else if(arr[s]<=arr[mid]){
    if(arr[mid] >= element && arr[s]<=element){
      e= mid-1;
    }else{
      s = mid+1;
    }
  }else{
    if(arr[mid]<=element && arr[e]>=element){
      s = mid+1;
    }else{
      e = mid - 1;
    }
  }
}

cout << mid;

  return 0;
}