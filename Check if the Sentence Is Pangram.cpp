class Solution {
public:
    bool checkIfPangram(string sentence) {
        int count=0;
        sort(sentence.begin(), sentence.end());
        for(int i=0; i<(int)sentence.size(); i++){
            if(sentence[i]!=sentence[i+1]){
                count++;
            }
        }
        if(count==26){
            return true;
        }
        return false;
    }
};