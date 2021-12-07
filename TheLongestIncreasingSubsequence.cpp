#include <bits/stdc++.h>

using namespace std;
int main()
{
int n;cin>>n;
int a[n];
for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
int m[n+1];
for(int i=0;i<=n;i++)
m[i]=100009;

int ans = 0;
for(int i=0;i<n;i++)
{

   int l = 0;int r= i + 1;
    while(r - l > 1)
        {  int k =( l + r )/2;
            if (m[k] < a[i])
                l = k;
            else
                r = k;
        }
    m[r] = a[i];
    ans = max(ans, r);
}    
cout<<ans;
    
return 0;
}
