#include <iostream>

using namespace std;
void swap(int *a, int *b)
{
int temp=*a;
*a=*b;
*b=temp;
}
void SelectionSort(int a[], int n)
{
int i, j, min;
for(i=0;i<n;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(a[min]>a[j]){min=j;}
}
if(min!=i){swap(&a[min], &a[i]);}
}
}
int main()
{
int a[]={23, 14, 10, 8, 4};
int n=sizeof(a)/sizeof(a[1]);
for(int i=0;i<n;i++)
{
cout<<"\n element of array is"<<a[i];
}
SelectionSort(a, n);
for(int i=0;i<n;i++)
{
cout<<"\n element of array is"<<a[i];
}
cout<<"\nHello World";

 return 0;
}
