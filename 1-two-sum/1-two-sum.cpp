#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, int> hash_table;
        for(int i = 0; i<nums.size(); i++){
            int second_integer=target-nums.at(i);
            if(hash_table.find(second_integer)!=hash_table.end()){
                result.push_back(hash_table[second_integer]);
                result.push_back(i);
                break;
            }
            else{
                hash_table[nums.at(i)]=i;
            }
        }
        
 
        return result;
        
    }
};