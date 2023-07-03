#include<iostream>
using namespace std;
void swapp(long long arr1[],long long arr2[],int index1,int index2)
{
    if(arr1[index1]>arr2[index2])
    {
        swap(arr1[index1],arr2[index2]); 
    }
}
void merge(long long arr1[],long long arr2[],int n,int m)
{
   int len=m+n;
   int gap=(len/2)+(len%2);
   while(gap>0)
   {
    int left=0;
    int right=left+gap;
    while(right<len)
    {
        if(left<n && right >=n)
        {
            swapp(arr1,arr2,left,right-n);
        }
        else if(left>=n)
        {
            swapp(arr2,arr2,left-n,right-n);
        }
        else
        {
            swapp(arr1,arr1,left,right);
        }
        left++;
        right++;
    }
    if(gap==1)
    {
        break;
    }
    gap=(gap/2)+(gap%2);

   }
}
void print(long long arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
long long arr1[5]={1,2,8,9,11},arr2[5]={4,5,6,9,15};
 merge(arr1,arr2,5,5);
 print(arr1,5);
 cout<<endl;
 print(arr2,5);


    return 0;
}


//TIME COMPLEXITY= LOG2(M+N) * O(M+N)
//SPACE COMPLEXITY = O(1)