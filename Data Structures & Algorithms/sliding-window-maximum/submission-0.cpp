class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int maxp = nums[0];
        int l = 0;
        int checker = 0;
        vector<int> res;
        for (int i = 0;i<k;i++){
            maxp = max (maxp,nums[i]);
        }
        if (maxp == nums[l]) checker = 1;
        l++;
        res.push_back(maxp);
        for (int r = k; r<nums.size();r++){
            if (checker && nums[r]>=maxp){
                maxp = nums[r];
                res.push_back(maxp);
            }
            else if(checker){
                maxp = *max_element(nums.begin()+l,nums.begin()+r+1);
                res.push_back(maxp);

            }
            else{
                if(maxp<nums[r]){
                    maxp = nums[r];
                    res.push_back(maxp);
                }
                else{
                    res.push_back(maxp);
                }
            }
            if (maxp == nums[l]) checker = 1;
            else checker = 0;
            l++;
        }

        return res;
        
    }
};
