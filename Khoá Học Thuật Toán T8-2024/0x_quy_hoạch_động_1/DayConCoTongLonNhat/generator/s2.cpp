#include <bits/stdc++.h>

using namespace std;

vector<int> maxSubArray(const vector<int>& nums) 
{
    int n = nums.size();
    vector<long long> dp(n);
    dp[0] = nums[0];
    long long max_sum = nums[0];
    int start = 0, end = 0, temp_start = 0;

    for (int i = 1; i < n; i++) 
    {
        if (dp[i-1] > 0) 
        {
            dp[i] = dp[i-1] + nums[i];
        } else 
        {
            dp[i] = nums[i];
            temp_start = i;
        }

        if (dp[i] > max_sum) 
        {
            max_sum = dp[i];
            start = temp_start;
            end = i;
        }
    }

    return vector<int>(nums.begin() + start, nums.begin() + end + 1);
}

signed main() 
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; ++i) 
    {
        cin >> nums[i];
    }

    vector<int> result = maxSubArray(nums);

    for (int num : result) 
    {
        cout << num << " ";
    }
}