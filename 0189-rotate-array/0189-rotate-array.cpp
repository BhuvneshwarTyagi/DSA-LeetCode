
class Solution {
    private:
    void revers(int start,int end,vector<int>& nums){
        int temp=0;
        while(start<end){
            temp=nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
            start++;
            end--;
        }
    }
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(k!=0 && k!=n){int left=n-(k%n);
        revers(0,left-1,nums);
        revers(left,n-1,nums);
        revers(0,n-1,nums);}
    }
};