//Vector
class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums;
        int res=0;
        for(int i=0; i<n; i++){
            nums.push_back(start+2*i);
            res^=nums[i];
        }
        return res;
    }
};


//Array
class Solution {
public:
    int xorOperation(int n, int start) {
        int nums[n];
        int res=0;
        for(int i=0; i<n; i++){
            nums[i]=(start+2*i);
            res^=nums[i];
        }
        return res;
    }
};