class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int hashsize = nums.size()*2;
        vector<pair<int, int>> hash(hashsize, {INT_MIN, -1});

        for(int i = 0; i < nums.size(); i++){
            int idx = (nums[i]%hashsize + hashsize) % hashsize;
            while(hash[idx].first != INT_MIN){
                if(hash[idx].first == nums[i] && abs(hash[idx].second - i) <= k){
                    return true;
                } else {
                    idx = (idx + 1) % hashsize;
                }
            }
            hash[idx] = {nums[i], i};
        }

        return false;
    }
};