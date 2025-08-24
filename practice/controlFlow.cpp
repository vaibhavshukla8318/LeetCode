#include <bits/stdc++.h>
using namespace std;


int reverseNumber(int a){
  int b = 0;
  while(a>0){
    b = b*10 + a%10;
    a/=10;
  }
  return b;
}

int palindromeNumber(int num){
    int a = num;
    int pal = 0;
    while(num>0){
      pal = pal*10 + num%10;
      num/=10;
    }
    if(a != pal){
      return false;
    }

  return true;
}
int main(){

  // reverseNumber
  // int a = 2345;
  // cout << reverseNumber(a);

  // palindromeNumber
  int num = 2345432;

  cout << palindromeNumber(num);
  return 0;
}