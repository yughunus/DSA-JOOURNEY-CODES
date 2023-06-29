#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
  for(int i=n-1;i>=0;i--)
  {
    int didswap=0;
    for(int j=0;j<=i-1;j++)
    {
      if(arr[j]>arr[j+1])
      {
        swap(arr[j],arr[j+1]);
        didswap=1;
      }
    }
    if(didswap==0)
    {
      break;
    }
  }
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}
int main()
{
  int arr[5]={1,5,3,5,34};
  int n=5;
  for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
  bubblesort(arr,n);
  
  return 0;
}