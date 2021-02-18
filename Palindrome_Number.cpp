###Given an integer x, return true if x is palindrome integer.
###An integer is a palindrome when it reads the same backward as forward. For example, 121 is palindrome while 123 is not.


class Solution {
public:
    bool isPalindrome(int x) {
        int target = x;
        int rev=0;
        if(x==0)
            return true;
        if(x<0)
            return false;
        while(x!=0){
            if(rev > INT_MAX/10)
                return false;
            if(rev < INT_MIN/10)
                return false;
            int remainder = x %10;
            rev = (rev*10) + remainder;
            x = x/10;
        }
        if(rev == target)
            return true;
        return false;
    }
    
};
