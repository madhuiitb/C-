class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1;
        int carry=1;
        while(carry){
            int sum = digits[n]+carry;
            if(sum>=10){
                carry=1;
            }
            else{
                carry=0;
            }
            digits[n]=sum%10;
            n--;
            if(n<0 && carry){
                digits.insert(digits.begin(), carry);
                break;
            }
        }
        return digits;
    }
};
