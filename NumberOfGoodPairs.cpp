class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int> res;
        for(int i=0; i<nums.size(); i++){
            for(int j=1; j<nums.size(); j++){
                if((nums[i]==nums[j]) && i<j ){
                    res.push_back((i,j));
                }
            }
        }
        return res.size();
    }
};