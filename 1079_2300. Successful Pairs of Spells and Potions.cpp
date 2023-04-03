// 2300. Successful Pairs of Spells and Potions


class Solution {
public:
int findSuccessPoint(vector<int>& potions, long long success, int spell)
{
    int s = 0;
    int e = potions.size()-1;
    int mid;
    int found=potions.size();
    
    while(s<=e)
    {
        mid= s+(e-s)/2;
        long long target= (long long)potions[mid]*spell;

        if(target>=success)
        {
            found=mid;
            e=mid-1;
            
        }
        else
        {
            s=mid+1;
        }

    }
    return potions.size()-found;

}


    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {




/* this soluttion gives TLE
        int n = spells.size();
        int m = potions.size();
        vector<int> ans(n);

        for(int i =0; i<n; i++)
        {
            int count=0;
            for(int j= 0; j<m;j++)
            {
                long long mul = (long long)spells[i]*potions[j];
                if(mul>=success)
                {
                    count++;

                }

            }
            ans[i]=count;
        }
        return ans;
*/



// by using binary srearch 

        int n = spells.size();
    
        vector<int> ans(n);

        sort(potions.begin(),potions.end());

        for(int i= 0; i<n;i++)
        {
            ans[i]=findSuccessPoint(potions, success,spells[i]);

        }
        return ans;

 
        
    }
};
