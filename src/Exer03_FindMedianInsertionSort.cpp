#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findMedian(vector<int>& nums) {
        int n = nums.size();

        if (n == 0) {
            return 0;
        }

        for (int i = 1; i < n; i++) {
            int chave = nums[i];
            int j = i - 1;

            while (j >= 0 && nums[j] > chave) {
                nums[j + 1] = nums[j];
                j--;
            }

            nums[j + 1] = chave;
        }

        int indiceMediana = (n - 1) / 2;
        return nums[indiceMediana];
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {99, 2, 51, 1, 8};
    cout << sol.findMedian(nums1) << endl;

    vector<int> nums2 = {70, 10, 30, 50};
    cout << sol.findMedian(nums2) << endl;

    return 0;
}
