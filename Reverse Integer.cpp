// Method 1
class Solution {
public:
    int reverse(int x) {
        long int num=0;
        if( x>= 2147483647 || x<=-2147483648){
            return 0;
        } 
        if(x>0){
            while(x>0){
                num = num * 10;
                if( num >= 2147483647 || num <= -2147483648){
                    return 0;
                } 
                num = num + (x % 10);
                x = x/10;
            }
        }
        else{
            x= -1 * x;
            while(x>0){
                num = num * 10;
                if( num >= 2147483647 || num <= -2147483648){
                    return 0;
                }
                num = num + (x%10);
                x = x/10;
            }
            num = -1 * num;
        }
        return int(num);
    }
};

// Method 2
int result=0
int prev=0;
while(x!=0){
    int cur = x * 10;
    x/=10;
    result*=(10+cur);
    if((result - cur)/10 != prev) return 0;

    prev = result;
}
return result;

}
