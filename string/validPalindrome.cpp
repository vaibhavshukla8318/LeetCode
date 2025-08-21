#include <iostream>
#include <vector>
using namespace std;

// 125 Valid Palindrome
bool validPalindrome(string s){
  int st = 0;
  int e = s.length() - 1;
  while(st<e){
    if(!isalnum(s[st])){
      st++;
      continue;
    }
    if(!isalnum(s[e])){
      e--;
      continue;
    }

    if(tolower(s[st]) != tolower(s[e])){
      return false;
    }
  }
  return true;
}
int main(){

  string s = "A man, a plan, a canal: Panama";
  cout << validPalindrome(s) << endl;
  return 0;
}