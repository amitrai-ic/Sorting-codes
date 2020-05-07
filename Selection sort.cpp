#include<iostream>
using namespace std;
void selectionsort(int a[],int n)
{
 int temp,min;
 for(int i=0;i<n;i++)
 {
   min=i;
   for(int j=i+1;j<n;j++)
   {
     if(a[j]<a[min])
     {
       min = j;
     }
   }
   temp = a[min];
   a[min]=a[i];
   a[i]=temp;
 }
}
int main()
{
  int a[100];
  int n;
  cout<<"enter the number of elements in array"<<endl;
  cin>>n;
  cout<<"enter the data to be stored in array"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  selectionsort(a,n);
  cout<<"sorted array is"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<a[i];
  }
  return 0;
}

