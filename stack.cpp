/*.................stack..............
1. LIFO (last in first out)
2. #include<bits/stdc++.h>
obj.empty();///stack is empty
obj.size();///how many elements in stack
obj.push();/// insert elements in stack
obj.pop();///delete elements in stack*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void showstack(stack<int> s)
{
while(!s.empty())
{
cout<<"\n elemenet is "<<s.top();
s.pop();
}
}
int main()
{
stack<int> s;
s.push(10);//insertion
s.push(20);
s.push(30);
s.push(40);
cout<<"\n size of stack is "<<s.size();
showstack(s);
s.push(50);
cout<<"\n element in top is"<<s.top();
return 0;
}
