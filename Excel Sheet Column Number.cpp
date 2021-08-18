??https://leetcode.com/problems/excel-sheet-column-number/

class Solution {
public:
    int titleToNumber(string s) {
        int sum=0;
        for(int i=0;i<s.size();++i){
            sum = sum*26 + (s[i]-64);
        }return sum;
    }
};
