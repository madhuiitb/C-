### Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
### Symbol       Value
### I             1
### V             5
### X             10
### L             50
### C             100
### D             500
### M             1000
### For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.
### Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:
###    I can be placed before V (5) and X (10) to make 4 and 9. 
###    X can be placed before L (50) and C (100) to make 40 and 90. 
###    C can be placed before D (500) and M (1000) to make 400 and 900.
### Given a roman numeral, convert it to an integer.

 
class Solution {
public:
    int romanToInt(string s) {
         int res=0;
        map<char, int> roman_int{{'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100}, {'D', 500},{'M', 1000}};
        int roman_length=s.size();
        for(int i=0;i<roman_length;i++){
            int num=roman_int[s[i]];
            if(num==0)
                return 0;
            int next=i+1;
            if(next<roman_length && roman_int[s[i]]<roman_int[s[next]]){
                int num2=roman_int[s[next]];
                if(num2==0)
                    return 0;
                num=num2-num;
                i++;
            }
            res+=num;
        }
        return res;
    }
};
