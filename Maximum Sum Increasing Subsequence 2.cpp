#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int msis(int arr[],int n )
{ 
   int ans[n+1];
    for(int i=0;i<=n;i++)ans[i]=10005;
    ans[0]=-1;
    for(int i=0;i<n;i++)
    {
        int index=upper_bound(ans,ans+n+1,arr[i])-ans;
        
        if( arr[i] > ans[index-1] && arr[i] < ans[index] )
            
            ans[index]=arr[i];
    }
    int sum=0;
    for( auto a:ans){ if( a!=10005 && a>0 )sum+=a;}
    return sum;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<msis(arr,n);

    return 0;
}
