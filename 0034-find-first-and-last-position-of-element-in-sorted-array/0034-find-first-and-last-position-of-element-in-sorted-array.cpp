class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans={-1,-1};
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                if(ans[0]==-1){
                    ans[0]=i;
                    ans[1]=i;
                }
                else{
                    ans[1]=i;
                }
            }
        }
        return ans;
    }
};