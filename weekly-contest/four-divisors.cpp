class Solution
{
public:
    int sumFourDivisors(vector<int> &nums)
    {
        int size = nums.size();
        int result = 0;
        for (int i = 0; i < size; ++i)
        {
            int num = nums[i];
            if (num > 5)
            {
                int count = 0;
                int j = 2;
                vector<int> yinzi(2, 0);
                for (; j <= num / 2; ++j)
                {
                    if (num % j == 0)
                    {
                        if (count == 2)
                        {
                            break;
                        }
                        else
                        {
                            yinzi[count++] = j;
                        }
                    }
                }
                if (j > num / 2 && count == 2)
                {
                    result += 1 + num + yinzi[0] + yinzi[1];
                }
            }
        }
        return result;
    }
};