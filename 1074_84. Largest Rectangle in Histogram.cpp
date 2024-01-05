// 84. Largest Rectangle in Histogram


class Solution {
private: 
vector<int> nextSmallIdx(vector<int> arr , int n )
{
    vector<int> ans(n);
    stack<int> st ;
    st.push(-1);

    for(int i =n-1;i>=0;i--)
    {
        while(st.top()!=-1 && arr[st.top()]>=arr[i])
        {
            st.pop();
        }
        ans[i]=st.top();
        st.push(i);

    }

    return ans ;
}

vector<int> prevSmallIdx(vector<int> arr , int n )
{
    vector<int> ans(n);
    stack<int> st ;
    st.push(-1);

    for(int i=0;i<n;i++)
    {
        while(st.top()!=-1 && arr[st.top()]>=arr[i])
        {
            st.pop();
        }
        ans[i]=st.top();
        st.push(i);

    }

    return ans ;
}

public:
    int largestRectangleArea(vector<int>& heights) {

        int n = heights.size();

        // by using the two function 

        

         vector<int> next(n);
         next = nextSmallIdx(heights,n);

         vector<int> prev(n);
         prev = prevSmallIdx(heights,n);

         int area = INT_MIN;

         for(int i= 0 ; i<n ; i++)
         {
             int l = heights[i];
             if(next[i]==-1)
             {
                 next[i]=n;
             }
             int b = next[i]-prev[i] -1;

             int newarea = l*b;

             area= max(area,newarea);

         }

         return area;


        
    }
};
