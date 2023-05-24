class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n=arr.size();
	vector<int> range;
	vector<vector<int>> output;
	sort(arr.begin(),arr.end());
	range.push_back(arr[0][0]);
	range.push_back(arr[0][1]);	
	for(int i=0;i<n-1;i++){
		if(range[1]>=arr[i+1][0] && arr[i+1][1]>range[1]){
			range[1]=arr[i+1][1];
		}
		else{
			if(range[1]<arr[i+1][0]){
				output.push_back(range);
				range=arr[i+1];
				
				
			}
		}
	}
	output.push_back(range);
	return output;
    }
};