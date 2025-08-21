#include <iostream>
#include <algorithm>
using namespace std;

// 151. Reverse Words in a String
string reverseWords(string s){
  reverse(s.begin(), s.end());
  int n = s.length();
  string ans = "";
  for(int i = 0; i<n; i++){
    string word = "";
    while(i<n && s[i] != ' '){
      word+= s[i];
      i++;
    }
    reverse(word.begin(), word.end());
    if(word.length()>0){
      ans += " " + word;
    }
  }
  return ans.substr(1);
}
int main(){

  string s = "the sky is blue";
  cout << reverseWords(s) << endl;
  return 0;
}