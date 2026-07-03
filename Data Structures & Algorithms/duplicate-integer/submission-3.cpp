class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> repeat;
        for(int x : nums){
            if (repeat.count(x)){
                return true;
            }
            repeat.insert(x);
        }
        return false;
        return unordered_set<int>(nums.begin(),nums.end()).size() < nums.size(); 
    }
};