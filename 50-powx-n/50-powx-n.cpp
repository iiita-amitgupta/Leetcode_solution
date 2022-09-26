class Solution {
public:
    double myPow(double x, long long n) {
        long long nn = n;
        if(n == 1 || x == 1.00){
            return x;
        }
        else if(n==0){
            return 1;
        }
        else if(n<0){
            x = 1/x;
           nn = -n;
        }
        
        if(n%2 == 0){
            double num = myPow( ((x*x)), nn/2 );
           return num;
        }
        else{
          double num = x*(myPow(x, nn-1));
           return num;
        }
    }
};