class Solution {
public:
    double myPow(double x, int n) {
        if(x == 0) return 0;
        if(n==0) return 1;
        int k = n/2;
        double res = 1;
        if(n>0){
            res = myPow(x,k) ;
            res = res*res;
            if(n%2) res *= x;
        }
        else{
            k *= -1;
            x = double(1/x);
            res = myPow(x,k);
            res = res*res;
            if(n%2) res *= x;
        }
        return res;
    }
};
