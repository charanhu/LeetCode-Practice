class Solution {
public:
    int numberOfMatches(int n) {
        vector<int> res;
        while(n>0){
            if(n%2 == 0){
                n=n/2;
                res.push_back(n);
            }
            if(n%2 != 0){
                n=((n-1)/2);
                res.push_back(n);
                n=n+1;
            }
            if(n==1){
                break;
            }
        }
        return accumulate(res.begin(), res.end(), 0);
    }
};