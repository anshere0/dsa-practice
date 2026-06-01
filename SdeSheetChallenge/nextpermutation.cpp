#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int>& nums) {

    int n = nums.size();
    int index = -1;

    // Step 1: Find breakpoint
    for(int i = n - 2; i >= 0; i--) {
        if(nums[i] < nums[i + 1]) {
            index = i;
            break;
        }
    }

    // Step 2: No breakpoint
    if(index == -1) {
        reverse(nums.begin(), nums.end());
        return;
    }

    // Step 3: Find just greater element
    for(int i = n - 1; i > index; i--) {
        if(nums[i] > nums[index]) {
            swap(nums[i], nums[index]);
            break;
        }
    }

    // Step 4: Reverse suffix
    reverse(nums.begin() + index + 1, nums.end());
}

int main() {

    vector<int> nums = {1, 2, 3};

    nextPermutation(nums);

    for(int x : nums) {
        cout << x << " ";
    }

    return 0;
}