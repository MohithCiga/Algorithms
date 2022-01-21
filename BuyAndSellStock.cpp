int maximumProfit(vector<int> &prices){
  int  profit=0;int i=0;vector<int> ans;int f=0;
    for( i=0;i<prices.size()-1;i++)
    {
        if(prices[i]<prices[i+1]&&f==0){ans.push_back(prices[i]);profit-=prices[i];f=1;break;}
    }
    for(;i<prices.size()-1;i++)
    {
        if(prices[i]>prices[i+1]&&f==1)
        { profit+=prices[i];ans.push_back(prices[i]);f=0;}
         if(prices[i]<prices[i+1]&&f==0){ans.push_back(prices[i]);profit-=prices[i];f=1;}
    }
//     cout<<ans.back();
    if(f=1){if(ans.size()>0&&ans.back()<prices[prices.size()-1])profit+=prices[prices.size()-1];ans.push_back(prices[prices.size()-1]);}
//     for(auto ab:ans){cout<<ab<<" ";}cout<<endl;
    if(profit<0)profit=0;
    return profit;
}
