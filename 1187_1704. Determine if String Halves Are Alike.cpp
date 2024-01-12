// 1704. Determine if String Halves Are Alike
class Solution {
public:
    bool halvesAreAlike(string s) {
        

    for (auto& x : s) { 
	x = tolower(x); 
	} 
    int cnt=0;
    int n=s.length();

for(int  i = 0;i<n;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                cnt++;
        }
        int c = 0;
        for(int i = 0;i<n/2;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                c++;
        }
        if(2*c==cnt)
            return true;
        else
            return false;
	
        

        
    }
};
