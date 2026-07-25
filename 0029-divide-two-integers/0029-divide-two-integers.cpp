class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == divisor) return 1;
        bool sign = true;
        if(dividend >=0 && divisor<0) sign = false;
        else if(dividend<=0  && divisor>0) sign = false;
       long long n = labs((long long)dividend);
        long long d = llabs((long long)divisor);
        long long q = 0;
        while(n>=d){
            int cnt = 0;
            while(n>=(d<<(cnt+1))){
                cnt++;
            }
            q += 1L<<cnt;
            n-= d<<cnt;

        }
        if(q==(1L<<31)&& sign )return INT_MAX;
        if(q==(1L<<31)&& !sign )return INT_MIN;
        return sign ? (int)q : (int)-q;
    }
};