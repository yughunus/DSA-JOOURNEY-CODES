#include<iostream>
#include<vector>
using namespace std;
 int findFloor(vector<long long> v, long long x)
    {
    int s=0;
    int e=v.size()-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
         if(v[mid]==x)
        {
            ans=mid;
        }
        if(v[mid]>x)
        {
            e=mid-1;
            
        }
       
        else
        {
            s=mid+1;
            ans =mid;
        }
        mid=s+(e-s)/2;
    }
    return ans;
        
    }
int main()
{
 long long int x=5;
  vector<long long int> v={1,2,8,10,11,12,19};
  int anss=findFloor(v,x);
  cout<<anss;
  return 0;
}