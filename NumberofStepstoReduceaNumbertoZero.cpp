#include<iostream>

using namespace std;

class Solution {
public:
    int count=0;
    int numberOfSteps(int num) {
        if((num%2) == 0 && num>0){
            num=num/2;
            count++;
            numberOfSteps(num);
        }
        else if(num>0){
            num=num-1;
            count++;
            numberOfSteps(num);
        }
        return count;
        
    }
};

int main(){
    Solution sol;
    int val=sol.numberOfSteps(14);
    cout<<"Val:"<<val<<endl;
    return 0;
}


