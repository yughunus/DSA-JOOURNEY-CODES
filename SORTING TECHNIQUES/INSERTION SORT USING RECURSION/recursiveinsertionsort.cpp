#include<bits/stdc++.h>
using namespace std;
void insertionsort(int arr[],int n,int i)
{
//BASE CASE
if(i==n)
{
  return ;
}
//processing
int j=i;
while(j>0 && arr[j-1]>arr[j])
{
  swap(arr[j],arr[j-1]);
  j--;
}
//recursive call
insertionsort(arr,n,i+1);
}
int main()
{
  
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionsort(arr, n,1);
    cout << "After Using bubble sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
  return 0;
}