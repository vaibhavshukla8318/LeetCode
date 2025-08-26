#include <bits/stdc++.h>
using namespace std;

int palindromeNumber(int num){
  string s = to_string(num);
  int n = s.length();
  int st = 0;
  int e = n-1;
  while(st<n){
    if(s[st]!=s[e]){
      return false;
    }
    st++;
    e--;
  }
  return true;
}
int main(){

  int num = 1234321;
  cout << "Is this palindrome number:" << num << " == " << palindromeNumber(num);
}