class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int ind=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==val){
                ind=i;
                break;
            }
        }
        int j=ind+1;
        int count=0;
        while(j<nums.size() && ind!=-1){
            if(nums[j]!=val){
                int temp=nums[ind];
                nums[ind]=nums[j];
                nums[j]=temp;
                while(nums[ind]!=val) ind++;
                if(ind<nums.size()-1){
                    j=ind+1;
                }
            }
            else{
                j=j+1;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]==val){
                count++;
            }
        }
        
        return nums.size()-count;
    }
};