class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(),count=0,max=0;
        
        for(int i=0;i<n;i++){
            map<char,int> hash;
            count=0;
            for(int j=i;j<n;j++){
                if(hash[s[j]]!=NULL){
                    break;
                }
                count++;
                if(count>max){
                    max=count;
                }
                hash[s[j]]++;
               
            }

        }
        return max;
    }
};