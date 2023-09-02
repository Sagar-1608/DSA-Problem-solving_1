// 50. Pow(x, n)
class Solution {
public:
    double solve (double x, long n)
    {   
        // for 0
        if(n==0) return 1;
        
        // for -ve power 
        if(n<0) return solve(1/x, -n);

        // for even power 
        if(n%2==0) return solve(x*x,n/2);
        // for odd power 
        else return x*solve(x*x, (n-1)/2);
    }
    double myPow(double x, int n) {
        return solve(x, long(n));

        
    }
};
