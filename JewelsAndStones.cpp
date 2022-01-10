class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<int> res;
        for(int i=0; i<jewels.length(); i++){
            for(int j=0; j<stones.length(); j++){
                if(jewels[i]==stones[j]){
                    res.push_back((i,j));
                }
            }
        }
        return res.size();
    }
};