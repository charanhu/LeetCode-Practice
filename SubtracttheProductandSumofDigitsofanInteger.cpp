class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int> numbers;
        int pd=1, sum=0;
        while(n>0){
            numbers.push_back(n%10);
            n=n/10;
        }
        for(int i=0; i<numbers.size(); i++){
            pd*=numbers[i];
            sum+=numbers[i];
        }
        return pd-sum;
        
    }
};