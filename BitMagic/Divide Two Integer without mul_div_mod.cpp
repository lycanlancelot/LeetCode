class Solution {
public:
    int divide(int dividend, int divisor) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int f=1;
        if(dividend<0&&divisor>0)f=-1;
        if(dividend>0&&divisor<0)f=-1;

        long long  res=0;
        long long  ans=1;
        long long  tmp=(long long)divisor;
        long long K=dividend;
        tmp=abs(tmp);
        K=abs(K);
        if(K<tmp)return 0;
        if(K==tmp)return 1*f;
        while(tmp<=K)
        {
            tmp<<=1;
            ans<<=1;
        }
        tmp>>=1;
        ans>>=1;
        while(ans>0)
        {
            if(K>=tmp)
            {
                res|=ans;
                K-=tmp;
            }
            tmp>>=1;
            ans>>=1;
        }
        return (int)res*f;
        
        
    }
};