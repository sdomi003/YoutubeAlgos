class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // A hash set named hashSet
        unordered_set <int> hashSet;
        // for every number in the vector called nums (user input)
        for (int num : nums) {
            // check to see if the num is already in the hash set
            if (hashSet.find(num) != hashSet.end()) {
                // hashSet.end() means the num was NOT found
                // But since we're using !=, if we're in here then we DID find num in hashSet
                return true;
            } else {
                // if num is not in hashSet, add it to hash set
                // this way if we run into num again in the future, we know it is
                //      a duplicate
                hashSet.insert(num);
            }
        }
        return false;
    }
};
