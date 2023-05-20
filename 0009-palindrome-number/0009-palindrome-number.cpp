class Solution {
public:
    bool isPalindrome(int x) {
        string temp=to_string(x);
        int end=temp.size()-1,begin=0;
        while(begin<end){

            if(temp[begin++]!=temp[end--]){
                return false;
            }
        }
        return true;
    }
};