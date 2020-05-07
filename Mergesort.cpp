#include<iostream>
using namespace std;
void merge(int a[],int s,int m,int e)
{
  int i,j,k;
  int l1 = m-s+1;
  int l2 = e-m;
  int l[l1],r[l2];
  for(i=0;i<l1;i++)
  {
    l[i]=a[s+i];
  }
  for(j=0;j<l2;j++)
  {
    r[j]=a[m+j+1];
  }
  i=0;
  j=0;
  k=s;
  while(i<l1 && j<l2)
  {
    if(l[i]<=r[j])
    {
      a[k]=l[i];
      i++;
    }
    else
    {
      a[k]=r[j];
      j++;
    }
    k++;
  }
  while(i<l1)
  {
    a[k]=l[i];
    i++;
    k++;
  }
  while(j<l2)
  {
    a[k]=r[j];
    j++;
    k++;
  }
}
void mergesort(int a[],int s,int e)
{
  if(s<e)
  {
    int m = (s+e)/2;
    mergesort(a,s,m);
    mergesort(a,m+1,e);
    merge(a,s,m,e);
  }
}
int main()
{
  int a[100];
  int n;
  cout<<"emter the no of elements in array"<<endl;
  cin>>n;
  cout<<"enter the data"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  mergesort(a,0,n-1);
  cout<<"sorted array is"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<",";
  }
  return 0;
}
