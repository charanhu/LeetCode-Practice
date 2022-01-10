//Method 1(Best)
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res(nums.size());
        res[0]=nums[0];
        for(int i=1; i<nums.size(); i++){
            res[i]=res[i-1]+nums[i];
        }
        return res;
    }
};


//Method 2(My Own Approach not better than Method1,but easy to understand)
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res(nums.size());
        int carry=0;
        for(int i=0; i<nums.size(); i++){
            res[i]=carry+nums[i];
            carry=res[i];
        }
        return res;
    }
};
