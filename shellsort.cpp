
//Shell Sort:
#include <iostream>
using namespace std;
void shell_sort(int a[],int n)
{
 int gap=n/2;
 int temp,j,i;
 while(gap>0)
 {
 for (int i = gap; i < n; i += 1)
 {
 int temp = a[i];
 int j;
 for (j = i; j >= gap && a[j - gap] > temp; j -= gap)
 a[j] = a[j - gap];

 a[j] = temp;
 }
 gap=gap/2;
 }
}
int main()
{
 int n;
 cout<<"Enter no of elements:";
 cin>>n;
 int a[n];
 cout<<"Elements are:";
 for(int i=0;i<n;i++)
 {
 cin>>a[i];
 }
 cout<<"After sotring:";
 shell_sort(a,n);
 for(int i=0;i<n;i++)
 {
 cout<<a[i]<<" ";
 }
 return 0;
}

