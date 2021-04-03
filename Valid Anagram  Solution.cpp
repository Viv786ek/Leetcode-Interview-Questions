//1st
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end()); 
        return s == t; 
        
        
    }
};

//2nd
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
        return false;
    }
    int counter[26]={0};
    for (int i = 0; i < s.length(); i++) {
        counter[s[i] - 'a']++;
        counter[t[i] - 'a']--;
    }
    for (int count : counter) {
        if (count != 0) {
            return false;
        }
    }
    return true;
        
    }
};
