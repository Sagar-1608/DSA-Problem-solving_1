// 1346. Check If N and Its Double Exist
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        
        sort(arr.begin(),arr.end());

        for( int i =0; i<arr.size();i++)
        {

            if(arr[i]==0 && arr[i+1]==0)
            {
                return true;
            }
            if(arr[i]==0 && arr[i+1]!=0)
            {
                continue;
            }
            int target =2*arr[i];
            int s = 0;
            int e = n-1,mid;

            while(s<=e)
            {
                mid = s+(e-s)/2;


                if(target == arr[mid])
                {
                    return true;
                }
                if(target>arr[mid])
                {
                    s= mid +1;
                }
                else
                {
                    e = mid -1;
                }
            }
        }
        return false;
    }
};
