#include <bits/stdc++.h>
using namespace std;

int sumOfNaturalNumber(int n){
  if(n==1){
    return n;
  }

  return n+sumOfNaturalNumber(n-1);
}

int fact(int n){
  if(n==0) return 1;

  return n*fact(n-1);
}

void reverseSentence(string sen){
   if(sen.length()==0) return;

   reverseSentence(sen.substr(1));
   cout << sen[0];
}

int power(int x, int n){
  if(n==1) return x;

  return x*power(x, n-1);
}

int main(){

  // int n  = 5;
  // cout << sumOfNaturalNumber(n);
  // cout << fact(n);
  

  // string sen = "the Factorial of a Number Using Recursion";
  // reverseSentence(sen);

  int x = 2;
  int n = 4;
  cout << power(x, n);
  return 0;
}