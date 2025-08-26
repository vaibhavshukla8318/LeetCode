#include <bits/stdc++.h>
using namespace std;

int addNumber(int num){
  int sum = 0;
  while(num>0){
    sum+= num%10;
    num/=10;
  }

  return sum;
}
int main(){

  int num = 2234;
  cout << "Adding number is: " <<addNumber(num);
}