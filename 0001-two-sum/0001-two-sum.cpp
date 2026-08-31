class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mp;

        // Pehle sabhi elements ko map me store karo
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]] = i;
        }

        // Ab complement search karo
        for(int i = 0; i < nums.size(); i++) {

            int required = target - nums[i];

            if(mp.find(required) != mp.end() && mp[required] != i) {
                return {i, mp[required]};
            }
        }

        return {};
    }
};