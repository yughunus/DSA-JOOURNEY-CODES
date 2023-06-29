#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
for(int i=0;i<n;i++)
{
  int mini=i;
  for(int j=i+1;j<n;j++)
  {
    if(arr[j]<arr[mini])
    {
      mini =j;
    }
  }
  swap(arr[i],arr[mini]);
}
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";

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
  selectionsort(arr,n);

  return 0;
}