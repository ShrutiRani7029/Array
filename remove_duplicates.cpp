class Solution {
public:
///1 1 2 : 2-1,2
    int removeDuplicates(vector<int>& v) {
        int i = 1;
        while (i < v.size()) {
            if (v[i] == v[i-1]) {
                v.erase(v.begin() + i);
            } else {
                i++;
            }
        }
       return v.size();
    }
};
