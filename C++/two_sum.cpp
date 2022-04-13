// 一遍哈希表
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> a; //建立hash表存放数组元素
        // int complement;
        // int i;

        for (int i = 0; i < nums.size(); ++i)
        {
            int complement = target - nums[i];
            if (a.count(complement) > 0)
            {
                return {a[complement], i};
            }
            a.insert(map<int, int>::value_type(nums[i], i));
        }
        return {};
    };
};