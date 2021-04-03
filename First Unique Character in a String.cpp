class Solution {
public:
	int firstUniqChar(string s) {
		int arr[26] = {0};
		for(auto ch:s){
		  arr[ch - 'a']++;
		}
		for(int i = 0; i < s.length(); i++){
		  if(arr[s[i] - 'a'] == 1) return i;
		}
		return -1;
	}
};
