#include<iostream>
using namespace std;
//quick sort 
int partition(int arr[],int s,int e )
{
  int pivot=arr[s];
  int cnt=0;
  for(int i=s+1;i<=e;i++)
  {
    if(arr[i]<=pivot)
    {
      cnt++;
    }
  }
  //place pivot at right position 
  int pivotindex=s+cnt;
  swap(arr[pivotindex],arr[s]);
// left and right part sambhalo ab 

int i =s ,j = e;
while(i<pivotindex && j>pivotindex)
{
  while(arr[i]<pivot)
  {
    i++;
  }
  while(arr[j]>pivot)
  {
    j--;
  }
  if(i<pivotindex && j>pivotindex)
  {
    swap(arr[i++],arr[j--]);
  }

}
return pivotindex;
}

void quicksort(int arr[],int s,int e)
{
  if(s>=e)
  {
    return ;
  }
   //partition karenge
   int p=partition(arr,s,e);

   //left part sort karo

   quicksort(arr,s,p-1);
     //right part sort karo

     quicksort(arr,p+1,e);
}
int main()
{
  int arr[8]={6, 6, -6, -2, -4,-6, 2 ,-6 };
  int n=8;

  quicksort(arr,0,n-1);

  for(int i =0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
 return 0;
}