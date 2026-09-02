#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isSorted(const vector<int>& nums) {
        int n = nums.size();

        if (n <= 1) {
            return true;
        }

        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution sol;

    vector<int> exemplo1 = {10, 20, 20, 35, 50};
    if (sol.isSorted(exemplo1)) {
        cout << "SORTED" << endl;
    } else {
        cout << "UNSORTED" << endl;
    }

    vector<int> exemplo2 = {4, 8, 15, 12, 23, 42};
    if (sol.isSorted(exemplo2)) {
        cout << "SORTED" << endl;
    } else {
        cout << "UNSORTED" << endl;
    }

    return 0;
}
