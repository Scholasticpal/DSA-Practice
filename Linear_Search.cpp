#include<iostream>

void main()
{
int a[]={67, 15, 19, 200, 21, 77};
int n=sizeof(a)/sizeof(a[0]);
int search;
cout<<"user input";
cin>>search;
for(int i=0;i<n;i++)//n=O(n)
{
if(a[i]==search){cout<<"element is found"; break;}
}

}
