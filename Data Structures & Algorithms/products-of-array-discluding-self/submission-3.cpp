class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pro = 1, zeroes = 0;
        for(int num : nums){
            if(num != 0){
                pro *= num;
            }
            else{
                zeroes++;
            }
        }

        if (zeroes >1){
            return vector<int>(nums.size(),0);
        }
        vector<int> res(nums.size());
        for (size_t i = 0; i < nums.size();i++){
            if (zeroes > 0){
                res[i] = (nums[i] == 0)? pro : 0;
            }
            else{
                res[i] = pro/nums[i];
            }
        }
        return res;
    }
};