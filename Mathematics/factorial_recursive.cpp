#include <iostream>
using namespace std;

// Factorial - Recursive implementation 
int fac(int n)
{
    if(n==0){
        return 1;
    }
    return n*fac(n-1);
}

int main(){
    int a= 0;
    cout<<"Enter number greater than 0";
    cin>> a;
    cout<<fac(a);
}
