class Solution {
public:
    string longestPalindrome(string s) {
       int size=s.size();
       int maxima=INT_MIN;
       string answer="";
       for(auto i=0;i<size;i++)
       {
       int l=i,r=i;
       while(l>=0 && r<size && s[l]==s[r])
       {
           if(maxima<(r-l+1))
           {
           answer=s.substr(l,r-l+1);
           maxima=max(maxima,r-l+1);
           }
           l--;
           r++;

       }
       int l1=i,r1=i+1;
       while(l1>=0 && r1<size && s[l1]==s[r1])
       {
           if(maxima<(r1-l1+1))
           {
           answer=s.substr(l1,r1-l1+1);
        //    cout<<answer<<endl;
           maxima=max(maxima,r1-l1+1);
           }
           l1--;
           r1++;
           
       }  
    }
    return answer;
    }
};