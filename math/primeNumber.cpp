#include <bits/stdc++.h>
using namespace std;


void primeNumberInRange(int num1, int num2 ){
  
  for(int i = num1; i<=num2; i++){
    int j = 1;
    int count = 0;
    while(j <= i){
      if(i%j == 0){
        count++;
      }
      j++;
    }
    if(count == 2){
      cout << i << " ";
    }
  }
}

bool primeNumber(int a){
  if(a==1) return false;
  int i =1;
  int count = 0;
   while(i<=a){
    if(a%i==0){
      count++;
    }
    if(count>2){
      return false;
    }
    i++;
   }
   return true;
}
int main(){

  int num1 = 5;
  int num2 = 13;
  // cout << primeNumber(num);
  primeNumberInRange(num1, num2);
}