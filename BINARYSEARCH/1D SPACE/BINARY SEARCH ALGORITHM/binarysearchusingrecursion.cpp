#include<iostream>
using namespace std;
int binarysearch(int arr[],int s,int e,int k)
{
  int mid=s+(e-s)/2;
  //base case 
  if(s>=e)
  {
    return 0;
  }
  //return index if function finds the value
  if(arr[mid]==k)
  {
    return mid;
  }
  //check left side then 
  if(mid>k)
  {
   return binarysearch(arr,s,mid-1,k);
  }
  else
  {
   return binarysearch(arr,mid+1,e,k);
  }
}
int main()
{
  int arr[5]={1,2,3,4,5};
int ans=binarysearch(arr,0,4,3);
  cout<<ans;
}