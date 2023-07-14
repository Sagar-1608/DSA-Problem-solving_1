// 2024. Maximize the Confusion of an Exam


class Solution {
public:
    int maxConsecutiveAnswers(string nums, int k) {


// Approach 1 
// using the  two loop for t and f 
// sliding window 


    //     int n = nums.size();
    //     int i = 0, j=0;
    //     int res=0;
    //     int Fcount=0;

    // // do all false to true and check max length


    //     while(j<n)
    //     {
    //         if(nums[j]=='F')
    //         {
    //             Fcount++;
    //         }

    //         // while fcount greater than k then move i forword
    //         while(Fcount>k)
    //         {
    //             if(nums[i]=='F')
    //             {
    //                 // remove this from the subarray 
    //                Fcount--;
    //             }
    //             i++;
    //         }

    //         res = max(res, (j-i)+1);
    //         j++;


    //     }


    //     // same for the do all true to false and check max length
    //     i=0;
    //     j=0;
    //     int Tcount = 0;


    //     while(j<n)
    //     {
    //         if(nums[j]=='T')
    //         {
    //             Tcount++;
    //         }

    //         // while fcount greater than k then move i forword
    //         while(Tcount>k)
    //         {
    //             if(nums[i]=='T')
    //             {
    //                 // remove this from the subarray 
    //                Tcount--;
    //             }
    //             i++;
    //         }

    //         res = max(res, (j-i)+1);
    //         j++;


    //     }

        int n = nums.size();
        int i = 0, j=0;
        int res=0;
        int Fcount=0;
        int Tcount=0;


     while(j<n)
        {
            if(nums[j]=='T')
            {
                Tcount++;
            }
            else{
                Fcount++;
            }

            // while fcount greater than k then move i forword
            while(min(Fcount,Tcount)>k)
            {
                if(nums[i]=='T')
                {
                    // remove this from the subarray 
                   Tcount--;
                }
                else{
                    Fcount--;
                }
                i++;
            }

            res = max(res, (j-i)+1);
            j++;


        }



        return res;
    }
};
