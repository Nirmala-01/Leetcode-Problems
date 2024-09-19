class Solution {
public:
    string mergeAlternately(string word1, string word2) {

int a=word1.length();
int b=word2.length();

string newe="";

int m=0;
int n=0;
        while(m<a && n<b)
        {
           
            newe=newe+word1[m];
            newe=newe+word2[n];
            m++;
            n++;
           


        }
        while( m<a)
        {
          newe=newe+word1[m];
          m++;
        }
         while( n<b)
        {
          newe=newe+word2[n];
          n++;
        }
        return newe;
        
    }
};
