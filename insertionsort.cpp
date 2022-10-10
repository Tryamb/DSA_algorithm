
//Program for insertion sort

#include <iostream>
using namespace std;
void insertionSort(int a[],int n)
{
 int i,j;
 for(j=1;j<n;j++)
 {
 int key=a[j];
 i=j-1;
 while(i>=0 && a[i]>key)
 {
 a[i+1]=a[i];
 i--;
 }
 a[i+1]=key;
 }
}
int main()
{
 int n;
 cout<<"Enter number of elements:";
 cin>>n;
 int arr[n];
 cout<<"Elements are:"<<endl;
 for(int i=0;i<n;i++)
 {
 cin>>arr[i];
 }
 insertionSort(arr,n);
 cout<<"Sorted array is:";
 for(int i=0;i<n;i++)
 {
 cout<<arr[i]<<" ";
 }
 return 0;
}
