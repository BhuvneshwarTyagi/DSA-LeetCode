class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max=1,len=1,n=nums.size();
        if(n==0){
            return 0;
        }
        for(int i=0;i<n-1;i++){
            if(nums[i]+1!=nums[i+1]){
                if(nums[i]==nums[i+1]){
                    continue;
                }
                else{
                    len=1;
                }
            }
            else{
                len++;
                if(max<len){
                    max=len;
                }
            }
        }
        return max;
    }
};