/*Insertion sort:

12, 15, 11, 10, 5

total = 5 elements

Insertion sort:

suppose no element in the memory
thus, we simply insert first lement: 12
now new element is coming: 15. again no sorting is required here
now we are inserting 11. now its proper position is before 12. so we shift everyone 
then we shift everyone again to insert 10
lstly we again shift everything to insert 5 in starting position.

12(0), index()
12(0), 15(1)
11(0), 12(1), 15(2)
10(0), 11(1), 12(2), 15(3)
5(0), 10(1), 11(2), 12(3), 15(4)

Algorithm:

To sort an array of size n in ascending order: 
1. Iterate from 1st to nth place in the array(NOT 0th place)
2. compare element(nth pos.) to its previous element(n-1 pos).
3. If element is smaller than its previous element, continue comparing to previous elements until current element becomes greater.
4. move elements one place up to insert current element*/

//code:

#include <bits/stdc++.h>
using namespace std;
 
void insertionSort(int arr[], int n)
{
    int i, cur, j;
    for (i = 1; i < n; i++)
    {
        cur = arr[i];
        j = i - 1;
 
        while (j >= 0 && arr[j] >= cur)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = cur;
    }
}
 

void printArr(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 

int main()
{
    int arr[] = { 12, 15, 11, 10, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    insertionSort(arr, n);
    printArr(arr, n);
 
    return 0;
}


//----------------------------------------------

#include <iostream>
using namespace std;

void InsertionSort(int a[], int n)
{
   int i,j, key;
   for(i=1; i<n;i++)
{
   key=a[i];
   j=i-1;
while(j>=0 && key<a[j])
{
   a[j+1]=a[j]; j--;
}
   a[j+1]=key;
}
}

int main()
{
   int a[]={3, 2, 12, 24, 5};
   int n=sizeof(a)/sizeof(a[0]);
   for(int i=0;i<n;i++)
   {
      cout<<"\n element of array is "<<a[i];
   }
   InsertionSort(a, n);
   for(int i=0;i<n;i++)
   {
      cout<<"\n element of array is "<<a[i];
   }
   cout<<"\nHello World"; return 0;
}
//----------------------------------------------
/*Time complexity

if numbers are sorted



n-1, O(n-1), O(n)



if numbers are not sorted



1, 2, 3, 4, 5, =1+2+3+...+n-1=n(n-1)/2=O(n^2)*/
