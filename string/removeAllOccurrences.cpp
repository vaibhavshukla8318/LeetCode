#include <iostream>
using namespace std;

// 1910. Remove All Occurrences of a Substring
string removeAllOccurrence(string s, string part){
  while(s.length()>0 && s.find(part) < s.length()){
    s.erase(s.find(part), part.length());
  }
  return s;
}
int main(){

  string s = "daabcbaabcbc";
  string part = "abc";
  cout << removeAllOccurrence(s, part) << endl; 
  return 0;
}