#include <iostream>
using namespace std;

// Factorial - Iterative implementation 
int fac(int n)
{
    int res = 1;
    for (int i = 1; i<=n; i++){
        res = res* i;
    }
    cout<<"Factorial: "<<res;
        return res;
}

int main(){
    int a= 0;
    cout<<"Enter number";
    cin>> a;
    fac(a);
}
