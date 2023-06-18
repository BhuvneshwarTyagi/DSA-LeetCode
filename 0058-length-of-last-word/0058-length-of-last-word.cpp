class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=0,last=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                if(length!=0){
                    last=length;
                }
                length=0;
            }
            else{
                length++;
            }
        }
        if(length!=0){
            return length;
        }
        return last;
    }
};