class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            
            return false;
        }
        int s[12];
        int i=0;
        while(x)
        {
            s[i]=x%10;
            x/=10;
            i++;
        }
        for(int j=0;j<i;j++)
        {
            if(s[j]!=s[i-1-j])
            return false;
        }
        return true;
        
    }
};