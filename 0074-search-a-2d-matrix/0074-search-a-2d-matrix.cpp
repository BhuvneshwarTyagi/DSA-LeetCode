class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int x) {
        int row=matrix.size(),col=matrix[0].size();
        int m;
        int rowi=0,mid;
        while(rowi<row){
            if(matrix[rowi][col-1]>=x){
                m=col;
                mid=m/2;
                while(mid<m){
                    if(matrix[rowi][mid]==x){
                        return true;
                    }
                    if(matrix[rowi][mid]>x){
                        m=mid;
                        mid=mid/2;
                    }
                    else{
                        if(matrix[rowi][mid]<x){
                            mid=mid+((m+1-mid)/2);
                        }
                    }
                }
            }
        rowi++;
    }
    return false;
    }
    
};