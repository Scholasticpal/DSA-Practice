#include<iostream.h>

using namespace std;
int countDigit(long n){
  return floor(log10(n) +1);
}

int main(){
  int x;
  cout<< "Enter value";
  cin>> x;
  countDigit(x);
}
