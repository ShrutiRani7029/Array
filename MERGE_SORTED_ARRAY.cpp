class Solution {
public:
    void merge(vector<int>& v1, int m, vector<int>& v2, int n) {
         int j=0;
         
        for(int i=0;i<m+n;i++){
            if(j==n)break;
           if(v1[i]==0){
            v1[i]=v2[j];
            j++;
           }
           
        }
      
    sort(v1.begin(),v1.end());

    }
};
