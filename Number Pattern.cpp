void printPattern(int n){

	
int val=n;
    for(int i=1;i<2*n;i++)
    {int c=n; int counter=i-n;int counter2=i-n;
        for(int j=1;j<2*n;j++)
        {
           
        
            if(i<=n)
            {
            if(j<n)
            {cout<<c<<" ";
            if(c>n-i+1)c--;
            }
            else
            {
                if(i+j>2*n)c++;
                cout<<c<<" ";
            }
            }
            else
            {
                if(j<=n){
                cout<<c<<" ";
              if((++counter2)<n)c--;
                }
                else
                {
                   
                    cout<<c<<" ";
                     if(j>=i&&counter2-->i-n)c++;
                    
                }
            }
            
            
            
        }
        cout<<endl;
    }


}
