#include <iostream>
#include <vector>

using namespace std;

int findDuplicateNumber(vector<int>& nums)
{
    int slow = 0, fast = 0, t = 0;
    while (true) {
        slow = nums[slow];
        fast = nums[nums[fast]];
        if (slow == fast) break;
    }
    cout << "slow: " << slow << endl;

    while (true) {
        slow = nums[slow];
        t = nums[t];
        if (slow == t) break;
    }

    return slow;
}

int main(void)
{
    int n = 0;
    vector<int> nums;
    cin >> n;
    while (n >= 0) {
        nums.push_back(n);
        cin >> n;
    }

    cout << findDuplicateNumber(nums) << endl;

    return 0;
}
