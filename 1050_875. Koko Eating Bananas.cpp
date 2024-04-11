
class Solution {

public:
    bool eatAll(vector<int>&piles, int h,int speed){
        int curr=0;
        for(double num:piles){
            double hours=num/speed;
            curr+=ceil(hours);
        }
        return curr<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int maxspeed=*max_element(piles.begin(),piles.end()), minspeed=1; // setting range for binary search
        
        while(maxspeed>minspeed){
            int mid=(maxspeed+minspeed)/2;
            if(eatAll(piles,h,mid)) maxspeed=mid; // if mid is enough to all bananas than minspeed to mid will have the minimum value.
            else minspeed=mid+1; // if mid is not enough than minimum value will lie between mid+1 to maxspeed
        }
        return minspeed;        
    }
};
