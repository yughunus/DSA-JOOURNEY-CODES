#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    int j=i;
    while(j>0 && arr[j-1]>arr[j])
    {
      swap(arr[j-1],arr[j]);
      j--;
    }
  }
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}
int main()
{
  int arr[10]={1,5,4,3,76,34,56,24,24,4};
  insertionsort(arr,10);
  return 0;
}