class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;

        // Step 1: frequency count
        for(char ch : s) {
            mp[ch]++;
        }

        // Step 2: first unique character
        for(int i = 0; i < s.size(); i++) {
            if(mp[s[i]] == 1) {
                return i;
            }
        }

        return -1;
    }
};