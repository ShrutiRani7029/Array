class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int>mp;
       int m=INT_MIN;
       for(int i=0;i<nums.size();i++)
       mp[nums[i]]++;
       int n=0;
       for(auto it:mp)
       {
         
          if(it.second>m)
          {
              n=it.first;
              m=it.second;
          }

       }
       return n;
    }
};
