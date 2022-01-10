//My mehos 1
class Solution {
public:
    int romanToInt(string s) {
        int n=s.length();
        int digit=0;
        for(int i=0; i<n; i++){
            if(s[i] == 'I' || s[i] =='V' || s[i] =='X' || s[i] =='L' || s[i] =='C' || s[i] =='D' || s[i] =='M' ){
                if(s[i]=='I' && s[i+1]=='V'){
                    digit=digit+4;
                    i++;
                }
                else if(s[i]=='I' && s[i+1]=='X'){
                    digit=digit+9;
                    i++;
                }
                else if(s[i]=='X' && s[i+1]=='L'){
                    digit=digit+40;
                    i++;
                }
                else if(s[i]=='X' && s[i+1]=='C'){
                    digit=digit+90;
                    i++;
                }
                else if(s[i]=='C' && s[i+1]=='D'){
                    digit=digit+400;
                    i++;
                }
                else if(s[i]=='C' && s[i+1]=='M'){
                    digit=digit+900;
                    i++;
                }
                else if(s[i]=='I'){
                    digit=digit+1;
                }
                else if(s[i]=='V'){
                    digit=digit+5;
                }
                else if(s[i]=='X'){
                    digit=digit+10;
                }
                else if(s[i]=='L'){
                    digit=digit+50;
                }
                else if(s[i]=='C'){
                    digit=digit+100;
                }
                else if(s[i]=='D'){
                    digit=digit+500;
                }
                else if(s[i]=='M'){
                    digit=digit+1000;
                }
            }
        }
        return digit;
    }
};


//Another method
class Solution {
public:
    int romanToInt(string s) {
        map<char, int> map;
        map.insert({'I', 1});
        map.insert({'V', 5});
        map.insert({'X', 10});
        map.insert({'L', 50});
        map.insert({'C', 100});
        map.insert({'D', 500});
        map.insert({'M', 1000});
        
        int res=map.at(s[s.length()-1]);
        for(int i=s.length()-2; i>=0; i--){
            if(map.at(s[i]) < map.at(s[i+1])){
                res-=map.at(s[i]);
            }
            else{
                res+=map.at(s[i]);
            }
        }
        return res;
        
    }
};
