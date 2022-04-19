#include <iostream>
using namespace std;

// Trailing Zeros in Factorial Naive Method

int countZeros(int n){
    
    int fact = 1;
    for(int i = 2; i<=n; i++){
        fact = fact * i;
    }
    
    int res = 0;
    while(fact % 10 ==0){
        res++;
        fact = fact/10;
    }
    return res;
}
int main(){
    int a= 0;
    cout<<"Enter number greater than 0: ";
    cin>> a;
    cout<<countZeros(a);
}
