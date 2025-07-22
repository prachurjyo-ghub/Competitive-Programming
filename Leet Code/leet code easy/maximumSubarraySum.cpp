#include <iostream>
#include <vector>
using namespace std;

int maximumSubarraySum(vector<int>& nums) {
    int n = nums.size();
    long long maxSum = INT_MIN;
    long long currSum = 0;
    for (size_t i = 0; i < n; i++) {
        currSum = currSum + nums[i];
        maxSum = max(maxSum, currSum);
        if (currSum < 0) {
            currSum = 0;
        }
    }
    return maxSum;
}

int main() {
    vector<int> nums = {-1};
    cout << "Maximum Subarray Sum: " << maximumSubarraySum(nums) << endl;
    return 0;
}
