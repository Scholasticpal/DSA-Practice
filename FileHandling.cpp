/*File Handling
1. Create 2. Read 3. Write 4. Append
....................................
fstream
1. ofstream 2 ifstream 3 fstream
....................................
ofstream: Create and Write
ifstream: read
fstream: read and write
..........create a file.........................*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream obj("my.txt");
if(obj.is_open())
{
cout<<"file is available":
obj.close();
}
else
cout<<"file is not available";
return 0;
}
//.............write inside a file....................
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream obj("my.txt");
if(obj.is_open())
{
cout<<"file is available";
obj<<"my name is happy singh";
obj.close();
}
else
cout<<"file is not available";
return 0;
}
//..........writing multiple files......................
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream obj("my.txt");
if(obj.is_open())
{
cout<<"file is available";
obj<<"my name is happy singh";
obj<<"\nmy name is not happy";
obj.close();
}
else
cout<<"file is not available";
return 0;
}
//...............again i am opening a file...............
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream obj;
obj.open("My.txt");
if(obj.is_open())
{
cout<<"file is available":
obj<<" i am in D slot";
obj.close();
}
else
cout<<"file is not available";
return 0;
}

//.......................................
