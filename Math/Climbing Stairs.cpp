class Solution {
public:
    int climbStairs(int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int t1=1;
        int t2=2;
        int t3;
        for(int i=3;i<=n;i++)
        {
            t3=t1+t2;
            t1=t2;
            t2=t3;
        }
        if(n==1)return 1;
        if(n==2)return 2;
        return t3;
        
    }
};