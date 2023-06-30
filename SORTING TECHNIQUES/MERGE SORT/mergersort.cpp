#include <bits/stdc++.h>
using namespace std;

void merge(int *arr,int s,int e)
{
    vector<int> ans;
    int mid=s+(e-s)/2;
    int left =s;
    int right = mid+1;
    while(left<=mid && right <=e)
    {
        if(arr[left]<=arr[right])
        {
            ans.push_back(arr[left]);
            left++;
        }
        else
        {
            ans.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid)
    {
      ans.push_back(arr[left]);
            left++;  
    }
     while(right<=e)
    {
      ans.push_back(arr[right]);
            right++;  
    }
    for(int i=s;i<=e;i++)
    {
        arr[i]=ans[i-s];
    }
    
    }

void mergesort(int *arr,int s, int e)
{
    //base case
    if(s>=e)
    {
        return ;
    }
    int mid=s+(e-s)/2;

    //left part sort krna hai 
    mergesort(arr,s,mid);

    //right part sort karna hai 
    mergesort(arr,mid+1,e);

    //merge
    merge(arr,s,e);
}



int main()
{
    int arr[15]={1,4,5,3,53,24,235,34,34,34,34,34,34,34,344};
     for(int i =0;i<15;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mergesort(arr,0,14);  
    
    for(int i =0;i<15;i++)
    {
        cout<<arr[i]<<" ";
    }
      return 0;
}