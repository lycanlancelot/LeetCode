class Solution {
public:
    int firstMissingPositive(int A[], int n) {
        int m[n+1];
        memset(m,0,sizeof(m));
        int mn=2147483647;
        for(int i=0;i<n;i++)
        {
            int t=A[i];
            if(t<=0)continue;
            if(t>n)continue;
            m[t]=1;
        }
        for(int i=1;i<=n;i++)
        {
            if(m[i]==0)return i;
        }
        return n+1;
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
    }
};