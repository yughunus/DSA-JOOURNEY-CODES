// OPTIMAL SOLUTION FOR MERGE TWO SORTED ARRAY 
#include<iostream>
#include<algorithm>
using namespace std;
void merge(long long arr1[],long long arr2[],int n,int m)
{
    int left=n-1;
    int right=0;
    while(left>0 && right<m)
    {
        if(arr1[left]>arr2[right])
        {
            swap(arr1[left],arr2[right]);
            left--;
            right++;
        }
        else{
            break;
        }

    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);

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

//time compexity =o(min(n,m))+o(nlogn)+o(mlogm)
//space complexity=o(1)