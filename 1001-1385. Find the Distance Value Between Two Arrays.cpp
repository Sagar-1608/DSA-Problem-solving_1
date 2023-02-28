// 1385. Find the Distance Value Between Two Arrays
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {

    sort(arr2.begin(), arr2.end());  // nlog(n)
    int c=0;

    for(auto i : arr1)
    {
        int s = 0, e= arr2.size()-1,mid;
        while(s<=e)
        {
            mid = s+(e-s)/2;
            if(abs(i-arr2[mid])<=d)
            {
                c++;
                break;
            }
            if(arr2[mid]<i)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
            

        }
    }
     return (arr1.size()-c);
    //  The distance value is defined as the number of elements arr1[i] such that there is not any element arr2[j] where |arr1[i]-arr2[j]| <= d.
        
    }
};
