#include <iostream>
#include <vector>
using namespace std;

int findNumbers(vector<int>& nums) {
    int countEven = 0;

    for(int i = 0; i < nums.size(); i++) {

        int digits = 0;
        int num = nums[i];

        while(num > 0) {
            digits++;
            num /= 10;
        }

        if(digits % 2 == 0) {
            countEven++;
        }
    }

    return countEven;
}

int main() {
    vector<int> nums = {12, 345, 2, 6, 7896, 3434,549540, 834394, 4341};

    cout << findNumbers(nums);

    return 0;
}