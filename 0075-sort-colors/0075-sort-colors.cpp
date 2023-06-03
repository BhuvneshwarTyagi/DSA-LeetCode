class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0,m=0;
        int n=nums.size();
        int h=n-1;
        int temp;
        while(m<=h){
            if(nums[m]==0){
                temp=nums[m];
                nums[m]=nums[l];
                nums[l]=temp;
                l++;
                m++;
            }
            else{
                if(nums[m]==2){
                    temp=nums[m];
                    nums[m]=nums[h];
                    nums[h]=temp;
                    h--;
                }
                else{
                    m++;
                }
            }
            
        }
    }
};