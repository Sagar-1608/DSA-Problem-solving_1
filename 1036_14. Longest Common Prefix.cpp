// 14. Longest Common Prefix
class Solution {
public:
    string longestCommonPrefix(vector<string>&s) {
        // by using comparision


        // int ans = s[0].length(), n = s.size();

        // for(int i=1; i<n; i++){
        //     int j = 0;
        //     while(j<s[i].length() && s[i][j]==s[0][j])   j++;
        //     ans = min(ans, j);
        // }
        // return s[0].substr(0, ans);


        // by using sort method
        // in this method we use sort function 

        sort(s.begin(),s.end());

        int n=s.size();
        if(n==0)return "";
        string a=s[0];
        string b=s[n-1];
        string ans="";
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i]){
                ans+=a[i];
            }
            else break;
        }
        return ans;
    }
};
