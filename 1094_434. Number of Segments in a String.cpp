// 434. Number of Segments in a String


class Solution {
public:
    int countSegments(string s) {
        

        char prev=' ';
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!=' ' && prev==' ' ) count++;
            prev= s[i];
        }

        return count;
    }
};
