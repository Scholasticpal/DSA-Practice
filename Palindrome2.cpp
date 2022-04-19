#include <iostream>
using namespace std;

bool isPal(int n){
    int rev = 0;
    int temp = n;
    while(temp!= 0){
        int ld = temp % 10;
        rev = rev*10 + ld;
        temp = temp/10;
    }
    if(rev == n){
        cout<<n<< " is a palindrome ";
    }
    else{
        cout<<n<< " is not a palindrome";
    }
    return(rev == n);
    
}

int main(){
    int a = 0;
    cout<< " enter number: ";
    cin>> a;
    isPal(a);
}
