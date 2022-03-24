//...........copy one file into another file.....................
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream obj;
obj.open("Tata.txt");
char str[50]="my name is khan";
obj<<str;
obj.close();
ofstream obj1;
//..................................
obj1.open("write.txt");
ifstream obj2;
obj2.open("Tata.txt");
char c;
while(!obj2.eof())
{
obj2.get(c);
obj1<<c;
}
obj1.close();
obj2.close();
return 0;
}
