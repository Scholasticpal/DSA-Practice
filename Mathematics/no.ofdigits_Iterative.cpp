#include<iostream>

using namespace std;
int count;
int countdigit(int n){
  while(n!=0){
      n = n/10;
      count++;
  }
  cout<<count;
  return count;
}

int main(){
    int x;
    cout<<"enter value";
    cin>>x;
    countdigit(x);
}
