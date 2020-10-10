class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // first quickly check to make sure there is at least 1 num in the nums vector.
        // the sorting function requires that the vector has at least 1 num
        if (nums.size() < 1) {
            return false;
        }
        
        // start by soring nums in-place using the built-in C++ sort
        sort(nums.begin(), nums.end());
        // for every index up until the SECOND to lase index
        for (int i = 0; i < nums.size() - 1; ++i) {
            // check to see if the num at i is the same as the num in front of it at i+1
            if (nums.at(i) == nums.at(i+1)) {
                return true;
            } 
        }
        // if we made it outside of the for-loop, there is no duplicate
        return false;
        
    }
};
