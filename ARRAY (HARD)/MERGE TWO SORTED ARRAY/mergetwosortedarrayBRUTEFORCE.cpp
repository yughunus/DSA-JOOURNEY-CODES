#include<iostream>
using namespace std;
void merge(long long arr1[],long long arr2[],int n,int m)
{
    long long arr3[m+n];
    int left=0;
    int right=0;
    int index=0;
    while(left<n && right <m)
    {
        if(arr1[left]<=arr2[right])
        {
            arr3[index++]=arr1[left++];
        }
        else
        {
            arr3[index++]=arr2[right++];
        }
    }
    while(left<n)
    {
       arr3[index++]=arr1[left++];
    }
     while(right<m)
    {
       arr3[index++]=arr2[right++];
    }
    for(int i=0;i<n+m;i++)
    {
        if(i<n)
        {
            arr1[i]=arr3[i];
        }
        else
        {
        arr2[i-n]=arr3[i];
        }
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
long long arr1[6]={1,2,8,9,11},arr2[6]={4,5,6,9,15};
 merge(arr1,arr2,5,5);
 print(arr1,5);
 cout<<endl;
 print(arr2,5);


    return 0;
}


//TIME COMPLEXITY = O(M+N) + O(M+N)
//SPACE COMPLEXITY = O(M+N)