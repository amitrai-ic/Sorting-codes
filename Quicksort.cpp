#include<iostream>
using namespace std;
int partition(int a[],int s,int e)
{
  int pivot ,index,temp;
  pivot = a[e];
  index = s;
  for(int i=s;i<e;i++)
  {
    if(a[i]>pivot)
    {
      temp = a[i];
      a[i] = a[index];
      a[index] = temp;
      index++;
    }
  }
  return index;
}
void quicksort(int a[],int s,int e)
{
  if(s<e)
  {
    int pi = partition(a,s,e);
    quicksort(a,s,pi-1);
    quicksort(a,pi+1,e);
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
  quicksort(a,0,n-1);
  cout<<"sorted array is"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<a[i];
  }
  return 0;
}
