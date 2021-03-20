class Solution {
public:
    int secondHighest(string s) {
         int max = -1, secondMax = -1; // store maximum and second maximum number
        for (char c : s)
        {
            if (c <= '9' && c >= '0')
            {
                int n = c - '0';
                if (n > max) // new largest number
                {
                    secondMax = max;
                    max = n; // update largest and second largest number
                }
                else if (n > secondMax && n < max) // find new 2nd largest number
                {
                    secondMax = n;
                }
            }
        }
        
        return secondMax;
        
    }
};
