class Solution 
{
public:
    string decodeAtIndex(string s, int k) 
    {
        int n;
        n=s.size();

        long long length;
        length=0;

        for(int i=0;i<n;i++)
        {
            if(isdigit(s[i]))
            {
                length*=s[i]-'0';
            }

            else
            {
                length++;
            }
        }    

        for(int i=n-1;i>=0;i--)
        {
            if(isdigit(s[i]))
            {
                length/=s[i]-'0';
                k%=length;
            }

            else
            {
                if(k==0 || k==length)
                {
                    string ans;
                    ans=s[i];
                    
                    return ans;
                }

                length--;
            }
        }

        return "0";
    }
};