#include <iostream>
using namespace std;

int main() {
  
  int a = 20, b= 30;
  for(int i =a; i<=30; i++){
    int count = 0;
    for(int j=1; j<=i; j++){
      if(i%j==0){
        count++;
      }
    }
    if(count == 2){
      cout << i << " ";
    }
  }

    return 0;
}
