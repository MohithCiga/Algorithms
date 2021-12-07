#Hackerrank
vector<int> longestCommonSubsequence(vector<int> a, vector<int> b) 
{
    int n=a.size();
    int m=b.size();
    int arr[n+1][m+1];
    
    vector<int> ans;
    for(int i =0;i<=n;i++)
    {   for(int j =0;j<=m;j++)
        if(i==0||j==0)
            arr[i][j]=0;
     }
    for(int i =1;i<=n;i++)
    {   for(int j =1;j<=m;j++)
        {
            
            if(a[i-1]==b[j-1])
                arr[i][j]=1+arr[i-1][j-1];
            
            else
                arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
            
        
        }
    }int i=n;int j=m;
//     for(auto aa:a)cout<<aa<<" ";
    
//     for(int i=0;i<=n;i++)
//     {
//         for(int j=0;j<=m;j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    while( i>0 && j>0 )
    {
        if(a[i-1]==b[j-1])
        {
            ans.push_back(a[i-1]);
            cout<<a[i-1]<<" ";
            i--;j--;
        }
        else
        {    if(arr[i-1][j]>arr[i][j-1])
                i--;
            else
                j--;
        }
    }
  
    reverse(ans.begin(),ans.end());
    
    
    return ans;

}
