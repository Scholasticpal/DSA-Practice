
#include <iostream>
#include<stdio.h>
using namespace std;

/* Greatest Common Divisor Naive Method */

int gcd(int a, int b){
    
    int res = min(a,b);
    while(res>0){
        if(a%res == 0 && b%res ==0){
            break;
        }
        res--;
    }
    return res;
}

int main()
{
    int m = 0,n=0;
    cout<<"Enter Number: ";
    cin>> m;
    cout<<"Enter Number: ";
    cin>> n;
    cout<<gcd(m, n);
}
