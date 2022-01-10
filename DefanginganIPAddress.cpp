class Solution {
public:
    string defangIPaddr(string address) {
        string res;
        for(int i=0; i<address.length(); i++){
            if(address[i]=='.'){
                res=res+"[.]";
            }
            else{
                res=res+address[i];
            }
        }
        return res;
    }
};//My approach

// //#include <iostream>

// using namespace std;

// template<class T>
// auto SumOf2(T a, T b){
//     return (a+b);
// }

// int main()
// {
//     cout<<"Sum of "<<SumOf2<float>(3.2, 1)<<endl;
//     return 0;
// }
