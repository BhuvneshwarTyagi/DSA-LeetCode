class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n=intervals.size();
        vector<vector<int>> output;
        if(n==0){
            return {newInterval};
        }
        for(int i=0;i<n;i++){
            if(intervals[i][0]>newInterval[0]){
                intervals.insert(intervals.begin()+i,newInterval);
                break;
            }
        }
        if(n==intervals.size()){
            intervals.push_back(newInterval);
        }
        n++;
        int first=intervals[0][0];
        int second = intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0]<=second){
                second=max(second,intervals[i][1]);
            }
            else{
                output.push_back({first,second});
                first=intervals[i][0];
                second=intervals[i][1];
            }
        }
        output.push_back({first,second});
        return output;
    }
};