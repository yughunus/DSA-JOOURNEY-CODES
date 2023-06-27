//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
    long long solve(int arr[],int i,int j)
    {
        if(i>j)
        {
            return 0;
        }
        long long int choice1=arr[i]+min(solve(arr,i+1,j-1),solve(arr,i+2,j));
        long long int choice2=arr[j]+min(solve(arr,i+1,j-1),solve(arr,i,j-2));
        long long int ans= max(choice1,choice2);
        return ans;
    }

//{ Driver Code Starts.
int main() 
{
   int arr[4]={5,3,7,10};
   long long int anss= solve(arr,0,3);
   cout<<anss;
 	return 0;
	}
// ITS A DP QUESTION YOU ARE GOING TO EXPERIENCE TLE WHILE SOLVING THIS USING RECURSION


