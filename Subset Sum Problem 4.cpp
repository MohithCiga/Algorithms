#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int subsetSum(int n,int arr[],int sum)
{
    if(sum==0)return 1;
    
    if(n<=0||sum<0)
      return 0;
  
    if(arr[n-1]>sum)
      return subsetSum(n-1,arr,sum);
  
    return subsetSum(n-1,arr,sum-arr[n-1]) || subsetSum(n-1,arr,sum);
}
int main() 
{
  int n;
  cin>>n;
  int arr[n];
  
 for(int i=0;i<n;i++)
 {
     cin>>arr[i];
 }
 int sum;
 cin>>sum;
  
 cout<< subsetSum(n,arr,sum); 
  
 return 0;
}
