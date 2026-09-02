#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> insertSorted(vector<int>& nums, int target) {
        int n = nums.size();

        nums.push_back(0);

        int j = n - 1;

        while (j >= 0 && nums[j] > target) {
            nums[j + 1] = nums[j];
            j--;
        }

        nums[j + 1] = target;

        return nums;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {10, 20, 30, 40, 50};
    int target1 = 25;
    sol.insertSorted(nums1, target1);

    for (int i = 0; i < (int)nums1.size(); i++) {
        cout << nums1[i] << (i + 1 < (int)nums1.size() ? " " : "");
    }
    cout << endl;

    vector<int> nums2 = {10, 20, 30, 40};
    int target2 = 5;
    sol.insertSorted(nums2, target2);

    for (int i = 0; i < (int)nums2.size(); i++) {
        cout << nums2[i] << (i + 1 < (int)nums2.size() ? " " : "");
    }
    cout << endl;

    return 0;
}
