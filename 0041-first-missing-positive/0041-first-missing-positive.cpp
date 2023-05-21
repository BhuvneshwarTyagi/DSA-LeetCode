class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int min=1,n=nums.size(),output=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                output=min^nums[i];
                min++;
                if(output != 0){
                    output=min-1;
                    break;
                }
                else{
                    output=min;
                }
            }
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    i++;
                }
                else{
                    break;
                }
            }
        }
        return output;
    }
};