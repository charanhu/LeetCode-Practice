class Solution {
public:
    int maxDepth(string s) {
        int max=0;
        int current_max=0;
        for(int i=0; i<(int)s.size(); i++){
            if(s[i]=='('){
                current_max++;
                if(current_max>max){
                    max=current_max;
                }
            }
            if(s[i]==')'){
                if(current_max>0){
                    current_max--;
                }
                else{
                    return -1;
                }
            }
        }
        if(current_max!=0){
            return -1;
        }
        return max;
    }
};