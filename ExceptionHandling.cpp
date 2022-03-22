
int main()
{
int x=-1;
try
{
if(x<1)
{throw x;}
cout<<"\nthere is no exception";
}
catch(int a)
{
cout<<"\n exception is executed";
}
}
//.......... Person can vote or not........................
#include <iostream>



using namespace std;



int main()
{
int age;
cout<<"\n enter the age of a person";
cin>>age;
try
{
if(age<18){throw age;}
cout<<"\nyou can vote ";
}
catch(int a)
{
cout<<"\n you cannot vote";
}
return 0;
}
............if you dont know the type of exception..................
#include <iostream>



using namespace std;



int main()
{
int age;
cout<<"\n enter the age of a person";
cin>>age;
try
{
if(age<18){throw age;}
cout<<"\nyou can vote ";
}
catch(...)
{
cout<<"\n you cannot vote";
}
return 0;
}
//...........divide by zero exception.................................
#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"\n enter the first value";
cin>>a;
cout<<"\n enter the second value";
cin>>b;
try
{
if(b==0){throw b;}
cout<<"\ndivision of two numbers is "<< a/b;
}
catch(...)
{
cout<<"\n divisor is zero, so division is not possible";
}
return 0;
}
