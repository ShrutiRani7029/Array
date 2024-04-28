class Solution {
public:
int maxProfit(vector<int>& prices) {
      int n=prices.size();
      int m=0;
      int k=prices[0];
      for(int i=1;i<n;i++){
          int cost=prices[i]-k;
          m=max(m,cost);
          k=min(k,prices[i]);
      }
      return m;
}
};
