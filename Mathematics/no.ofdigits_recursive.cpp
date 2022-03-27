#include<iostream>

using namespace std;

int count;
void main(){
    int x;
    cout<<"Enter Value";
    cin>>x;
    countdigitR(x);
}

int countdigitR(int n){
    if(n!=0){
    count++;
    n=n/10;
    return count + countdigitR(n);
    }
    cout<<count;
}
