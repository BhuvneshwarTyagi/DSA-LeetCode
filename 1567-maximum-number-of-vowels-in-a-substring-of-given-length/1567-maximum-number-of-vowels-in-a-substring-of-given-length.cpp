class Solution {
public:
    int maxVowels(string s, int k) {
        int start=0;
        int n=s.size();
        int end=k-1;
        int count=0,max=0;
        for(int i=start;i<=end;i++){
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' || s[i]=='u'){
                count++;
            }
        }
        max=count;
        while(end<n-1){
            if(s[start]=='a' || s[start]=='e' ||s[start]=='i' ||s[start]=='o' || s[start]=='u'){
                count--;
            }
            if(s[end+1]=='a' || s[end+1]=='e' ||s[end+1]=='i' ||s[end+1]=='o' || s[end+1]=='u'){
                count++;
            }
            start++;
            end++;
            if(count>max){
                max=count;
            }
        }
        return max;
    }
};