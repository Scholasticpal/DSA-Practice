
#include <iostream>

using namespace std;

int main()
{   
    int m = 0;
    int n = 798897;
    int b = n;
    bool result = true;
        
        while(n>0){
            
            m = m*10 + n%10;
            n = n/10;
            
        }
        cout << m<<endl;
        cout<< n<<endl;
        if(b == m){
            result = true;
            cout<< "true";
        }
        else{
            result=false;
            cout<< "false";
        }
        

    return result;
}
