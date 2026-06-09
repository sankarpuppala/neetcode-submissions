class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp =0 , l =0 , r=1;
        while(r<prices.size()){
            if (prices[l]>=prices[r]){
                l = r;
                r += 1;
            }    
            else{
                maxp = max(maxp,prices[r]-prices[l]);
                r += 1;    
            }
        
        }
        return maxp;    
        
    }
};
