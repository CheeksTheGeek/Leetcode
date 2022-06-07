class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool> countMap;
        for(auto& i: nums){
            if(countMap[i]){
                return true;
            }
            else countMap[i] = true;
        }
        return false;
    }
};