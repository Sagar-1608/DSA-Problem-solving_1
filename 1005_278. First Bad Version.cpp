// 278. First Bad Version
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {

        int s = 1, e = n , mid, ans=0 ;
        // using binary search 

        while (s<=e)
        {
            mid= s+(e-s)/2;
            if(isBadVersion(mid)==false)
            {
                
                s=mid+1;
            }
            else
            { 
                
                e=mid-1;
            }

        }
        return s;

        
    }
};
