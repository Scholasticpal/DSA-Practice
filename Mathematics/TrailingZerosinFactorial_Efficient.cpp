
#include <iostream>
#include<stdio.h>
using namespace std;

/* Efficient Method:
consider the prime factors of the number. We can see only 2s and 5s together
will give us zeros in the end. Since 5 are much less than 2s, we count the
number of 5s */

/* Time Complexity: θ(logn) */

int countTrailingZeros(int n){
    int res = 0;
    for(int i =5; i<= n; i*5){
        res = res + n/i;
    }
    return res;
}

int main()
{
    int a = 0;
    cout<<"Enter Number: ";
    cin>> a;
    cout<<countTrailingZeros(a);
}
