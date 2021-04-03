class Solution {
public:
    int reverse(int x) {
        long long num = 0;
		int a = 0;
		while (x)
		{
			a = x % 10;
			num = a + num * 10;
			x = x / 10;
		}
		return (num>INT_MAX||num<INT_MIN)?0:num;
        
    }
};
