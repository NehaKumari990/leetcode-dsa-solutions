class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26] = {0};

        // Step 1: frequency count
        for(char ch : s) {
            freq[ch - 'a']++;
        }

        // Step 2: first unique character ka index
        for(int i = 0; i < s.size(); i++) {
            if(freq[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};