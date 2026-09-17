class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>result;
        int size = digits.size();
        string s = "";
        for(int i=0;i<size;i++){
            s += to_string(digits[i]);
        }
        long res = stol(s)+1;
        int digit = 0;
        while(res>0){
            digit = res % 10;
            result.push_back(digit);
            res = res/10;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
