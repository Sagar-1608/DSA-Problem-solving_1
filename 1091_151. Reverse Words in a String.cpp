// 151. Reverse Words in a String

class Solution {
public:

    void  reverse_word(string &s , int i , int j)
     {
         while(i<j)
         {
             char temp = s[i];
             s[i]=s[j];
             s[j]=temp;
             i++;
             j--;

         }
     }

     
    string reverseWords(string s) {

       // this solution use extra space 
        // int i=0;
        // int n = s.length();
        // string result ="";

        // while(i<n)
        // {
        //     // remove first space 
        //     while(i<n && s[i]==' ') i++;
        //     if(i>=n) break;
        //     // word count 
        //    int  j= i+1;
        //     while(j<n && s[j]!=' ') j++;
        //     // teke substring 
        //     string sub = s.substr(i, j-i);

        //     if(result.length()==0) result=sub;
        //     else result = sub +' '+ result ;

        //     i=j+1;

   
        // }

       // return result ;

    
      // wirh out extra space 

        int i=0, j=0;
        int l=0;
        int len=s.length();
        int wordcount=0;

        while(true){

            // for space 
            while(i<len && s[i] == ' ') i++;
            // when all string tarverse
            if(i==len) break;

            // this is for check first word  
            if(wordcount) s[j++]=' ';
            l=j;

            // insert the new word in strint at exat position 
            while(i<len && s[i] != ' ') {s[j]=s[i]; j++; i++;} 

            // reverse the added word 
            reverse_word(s,l,j-1);  
            // increase the count of word               
            wordcount++;   
        }

        //convert the string size equal to exact required size 
        s.resize(j); 

        // finaly reverse the string                           
        reverse(s.begin(), s.end()); 

        return s;     


        
    }
};
