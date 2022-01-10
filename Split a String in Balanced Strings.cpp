//My method
class Solution {
public:
    int balancedStringSplit(string s) {
        int R=0, L=0, carry=0;
        for(int i=0; i<(int)s.size(); i++){
            if(s[i]=='R'){
                R++;
            }
            else if(s[i]=='L'){
                L++;
            }
            if(R==L){
                    carry++;
                    R=0;
                    L=0;
                }
        }
        return carry;
    }
};

//Another method
class Solution {
public:
    int balancedStringSplit(string s) {
        int total=0;
        vector<int> a(2,0);
        for(int i=0; i<(int)s.size(); i++){
            (s[i]=='L') ? ++a[0] : ++a[1];
            if(a[0]!=0 && a[0]==a[1]){
                total++;
                a[0]=a[1]=0;
            }
        }
        return total;
    }
};