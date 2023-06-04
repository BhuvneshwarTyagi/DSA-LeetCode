class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int carry=1;
        vector<int> output;

        for(int i=0;i<n;i++){
            output.push_back(digits[i]);
        }
        for(int i=n-1;i>=0;i--){
            output[i]+=carry;
            carry=output[i]/10;
            
            if(!carry){
                break;
            }else{
                output[i]=output[i]%10;
            }
        }
        if(carry!=0){
            output.insert(output.begin(),carry);
        }

        return output;
    }
};