//Better approach
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        static const unordered_map<string, int> rule = {{"type", 0}, {"color", 1}, {"name", 2}};
        int result = 0;
        for (const auto& item : items) {
            if (item[rule.at(ruleKey)] == ruleValue) {
                ++result;
            }
        }
        return result;
    }
}; 

//My aproach
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int res=0;
        for(int i=0; i<items.size(); i++){
            if((ruleKey=="type" && items[i][0]==ruleValue) || (ruleKey=="color" && items[i][1]==ruleValue) || (ruleKey=="name" && items[i][2]==ruleValue)){
                res++;
            }
        }
        return res;
    }
};