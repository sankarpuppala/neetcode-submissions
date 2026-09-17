class Solution {
public:
    unordered_set<int> dp;

    bool isHappys(int n, unordered_set<int>& dp) {
        int res = 0;

        while (n > 0) {
            int digit = n % 10;
            res += digit * digit;
            n /= 10;
        }

        if (res == 1)
            return true;

        if (dp.count(res))
            return false;

        dp.insert(res);

        return isHappys(res, dp);
    }

    bool isHappy(int n) {
        dp.clear();
        return isHappys(n, dp);
    }
};