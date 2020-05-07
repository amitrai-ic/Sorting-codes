#include<iostream>
using namespace std;
void insertionsort(int a[],int n)
{
  int j,key;
  for(int i=0;i<n;i++)
  {
    key = a[i];
    j=i-1;
    while(j>0 && a[j]>a[j+1])
    {
      a[j+1]=a[j];
      j--;
    }
    a[j+1]=key;
  }
}
int main()
{
  int a[100];
  int n;
  cout<<"enter the no of elements in array"<<endl;
  cin>>n;
  cout<<"enter data"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  insertionsort(a,n);
  cout<<"sorted array is"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<",";
  }
  return 0;
}
