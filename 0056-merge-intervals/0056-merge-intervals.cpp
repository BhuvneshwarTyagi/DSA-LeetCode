class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
  		int n=arr.size();

			vector<vector<int>> output;
			sort(arr.begin(),arr.end());

			for(int i=0;i<n;i++){
				if(output.empty() || arr[i][0]>output.back()[1]){
			output.push_back(arr[i]);
		}
		else{
			output.back()[1]=max(output.back()[1],arr[i][1]);
		}
			}
			return output;
    }
};