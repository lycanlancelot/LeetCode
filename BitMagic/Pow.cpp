class Solution {
public:
    double pow(double x, int n) {
        double res=1;
        double k=1;
        if(n<0)k=-1;
        n=abs(n);
        while(n>0)
        {
            if(n&1)
            res=res*x;
            x=x*x;
            n>>=1;
        }
        if(k<0)
        return 1/res;
        return res;
        
    }
};