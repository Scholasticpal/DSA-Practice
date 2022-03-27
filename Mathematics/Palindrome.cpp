

#include <iostream>

using namespace std;

int main()
{   
    int m = 0;
    int n = 0;
    cout<<"Enter value";
    cin>>n;
    int temp = n;
    bool result = true;
        
        while(temp>0){
            
            m = m*10 + temp%10;
            temp = temp/10;
            
        }
        cout << m<<endl;
        cout<< n<<endl;
        if(n == m){
            result = true;
            cout<< "true";
        }
        else{
            result=false;
            cout<< "false";
        }
        

    return result;
}
