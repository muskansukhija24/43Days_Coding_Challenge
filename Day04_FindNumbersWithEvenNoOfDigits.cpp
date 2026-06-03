class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;

        for (int val : nums) {
            if (digitCount(val) % 2 == 0) {
                ans++;
            }
        }

        return ans;
    }

    int digitCount(int n) {
        return to_string(n).length();
    }
};
