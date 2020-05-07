//sorting of array usimg heapsort
#include<iostream>
using namespace std;
void heapify(int a[],int n,int i)
{
  int l,r;
  l=(2*i)+1;
  r=(2*i)+2;
  int largest = i;
  if(l<n && a[l]>a[largest])
  {
    largest = l;
  }
  if(r<n && a[r]>a[largest])
  {
    largest = r;
  }
  if(largest != i)
  {
    swap(a[i],a[largest]);
    heapify(a,n,largest);
  }
}
void heapsort(int a[],int n)
{
  for(int i=n/2-1;i>=0;i--)                  //building heap
  {
    heapify(a,n,i);
  }
  for(int i=n-1;i>=0;i--)
  {
    swap(a[i],a[0]);
    heapify(a,i,0);
  }
}
int main()
{
  int a[100],n;
  cout<<"enter the no of elements in array"<<endl;
  cin>>n;
  cout<<"ener the data"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  heapsort(a,n);
  cout<<"sorted array"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<a[i];
  }
  return 0;
}
