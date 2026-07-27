#include <bits/stdc++.h>
using namespace std;

// APPROACH : HASH SET
bool containsDuplicateUsingHashSet(vector<int>& nums) {
    unordered_set<int> hashset; // unordered_set == hashset
    for (int i = 0; i < nums.size(); i++) {
        if (hashset.find(nums[i]) != hashset.end()) {
            return true;
        }
        hashset.insert(nums[i]);
    }

    return false;
}

int main() {
    vector<int> nums1 = {1, 2, 3, 1};
    vector<int> nums2 = {1, 2, 3, 4};

    cout << "nums1 has duplicate: " << boolalpha << containsDuplicateUsingHashSet(nums1) << endl;
    cout << "nums2 has duplicate: " << boolalpha << containsDuplicateUsingHashSet(nums2) << endl;

    return 0;
}
