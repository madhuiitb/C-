class Solution {
public:
    int reverse(int x) {
        int remainder=0;
        if(x >(pow(2,31) -1))
            return 0;
        while(x!=0){ 
            if(remainder > INT_MAX/10) 
              return 0;
            if(remainder < INT_MIN/10) 
              return 0;
            int rem = x %10;
            remainder = (remainder*10) + rem;
            x = x/10;
        }
        if(x<0){
            remainder = -remainder;
        } 
        return remainder;
    }
};
