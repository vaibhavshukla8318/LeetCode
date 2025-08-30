#include <bits/stdc++.h>
using namespace std;

void vectorToMap(vector<pair<int, int>> arr){
map<int, int> mp(arr.begin(), arr.end());

for(auto& i:mp){
  cout << i.first << "and" << i.second << endl;
} 

}

void addMap(map<int, string> m1, map<int, string> m2){
  m1.insert(m2.begin(), m2.end());

  for(auto i : m1){
    cout << i.first << ": " << i.second << "::";
  }
}

void stackPair(stack<pair<int, int>> s){
   while(!s.empty()){
    cout << "(" << s.top().first << ", " << s.top().second << ")";
    s.pop();
   }
   cout << endl;
  
}

int findFrequency(multiset<int> arr, int element){
  int frequency = arr.count(element);

  return frequency;
}

vector<string> permutationOfString(string& s){
  sort(s.begin(), s.end());

  vector<string> ans;
  do{
    ans.push_back(s);
  }while(next_permutation(s.begin(), s.end()));

  return ans;
}

void permutationOfNumber(vector<int>& arr){
  sort(arr.begin(), arr.end());

  do{
    for(int i=0; i<arr.size(); i++){
      cout << "(" << arr[i] << ")" << ", ";
    }
  }while(next_permutation(arr.begin(), arr.end()));


}
int main(){

  // vector<pair<int, int>> arr = {{1,2},{7,8},{4,5}};
  // vectorToMap(arr);

  // map<int, string> m1 = {{1, "a"}, {2, "b"}, {3, "c"}};
 
  // map<int, string> m2 = {{4, "d"}, {5, "e"}, {6, "f"}};

  // addMap(m1, m2);

  // stack<pair<int, int>> s;
  // s.push({1,2});
  // s.push({3,4});
  // s.push({5,6});
  // s.push({7,8});

  // stackPair(s);
  // cout << s.size() << endl;
  // cout << s.top().first << ", " << s.top().second<< endl;
  // s.pop();

  // stackPair(s);

  // multiset<int> arr = {1,2,3,4,3,5,6};
  // int element = 9;
  // cout << findFrequency(arr, element);

  // string s = "ABC";
  // vector<string> ans = permutationOfString(s);

  // for(auto i:ans){
  //   cout << "(" << i << ")" << ", ";
  // }

  // vector<int> arr = {1,2,3};
  // permutationOfNumber(arr);

  // vector<int> m = {1,2,3,4,2,3,4};
  // unordered_multiset<int> s(m.begin(), m.end(), 3);
  // for(int i = 0; i<m.size(); i++){
  //   if(m[i]==3){
  //     continue;
  //   }
  //   cout << m[i] << ", ";
  // }
  // cout << endl;

  // for(auto i:s){
  //   cout << i << ", ";
  // }

  // string s = "pwwkew";
  // unordered_set<char> st(s.begin(), s.end());
  // int a = st.size();
  // for(auto i:st){
  //   cout <<i;
  // }
  // cout << endl;
  // cout << a;

  vector<string> s = {"flower","flow","flight"};
  set<char> st;

  for(auto i:s){
    if(st.find(i) != st.end()){
      cout << i;
    }
  }
  return 0;

}