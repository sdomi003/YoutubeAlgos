class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for (int p1 = 0; p1 < nums.size(); ++p1) {
            for (int p2 = p1 + 1; p2 < nums.size(); ++p2) {
                if (nums.at(p1) == nums.at(p2)) {
                    return true;
                }
            }
        }
        return false;
    }
};
