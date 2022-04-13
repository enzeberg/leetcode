// һ���ϣ��
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> a; //����hash��������Ԫ��
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