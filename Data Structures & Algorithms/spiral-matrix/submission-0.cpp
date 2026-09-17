class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top = 0;
        int bottom = matrix.size();
        int right = matrix[0].size();
        int left = 0;
        vector<int> res;
        while(top<bottom && left<right){
            for(int c = left;c<right;c++){
                res.push_back(matrix[top][c]);
            }
            top += 1;
            for(int r = top;r<bottom;r++){
                res.push_back(matrix[r][right-1]);
            }
            right -= 1;
            if(right<=left || bottom <= top) break;
            for(int c = right-1;c>=left;c--){
                res.push_back(matrix[bottom-1][c]);
            }
            bottom -= 1;
            if(bottom<=top || right<= left) break;
            for(int r = bottom-1;r>=top;r--){
                res.push_back(matrix[r][left]);
            }
            left += 1;
        }
        return res;
    }
};
