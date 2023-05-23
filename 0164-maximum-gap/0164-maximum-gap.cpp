class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max=0,diff=0,n=nums.size();
        for(int i=0;i<n-1;i++){
            diff=nums[i+1]-nums[i];
            if(diff>max){
                max=diff;
            }
        }
        return max;
    }
};