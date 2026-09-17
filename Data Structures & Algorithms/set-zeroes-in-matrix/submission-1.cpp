class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int coln = matrix[0].size();
        for(int i = 0;i<row;i++){
            for(int j = 0;j<coln;j++){
                if(matrix[i][j] == 0){
                    for(int k=0;k<row;k++){
                        if(matrix[k][j] != 0){
                            matrix[k][j] = -1;
                        }
                    }
                    for(int l =0;l<coln;l++){
                        if(matrix[i][l] != 0 ){
                            matrix[i][l] = -1;
                        }
                    }

                }
            }
        }
        for(int i = 0;i<row;i++){
            for(int j = 0;j<coln;j++){
                if(matrix[i][j] == -1){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
