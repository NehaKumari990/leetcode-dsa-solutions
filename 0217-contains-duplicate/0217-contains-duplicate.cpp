class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_map<int, int> mp;

        // Step 1: Frequency count
        for(int x : nums) {
            mp[x]++;
        }

        // Step 2: Frequency check
        for(auto it : mp) {
            if(it.second > 1) {
                return true;
            }
        }

        return false;
    }
};