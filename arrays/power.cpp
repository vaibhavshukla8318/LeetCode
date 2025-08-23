#include <iostream>
using namespace std;

// 50. Pow(x, n)
double  power(double x, int n){
  if(n==0) return 1;
  if(x==0) return 0;
  if(n==1) return x;
  if(x==1) return 1;
  
  double ans = 1;
  long binary = n;

  if(n<0){
    x = 1/x;
    binary = -binary;
  }
  while(binary>0){
    if(binary%2==1){
      ans*=x;
    }
    x*=x;
    binary/=2;
  }
  return ans;
}
int main(){


  double x = 2.00000;
  int n = -2147483648;

  cout << power(x, n);
  return 0;
}