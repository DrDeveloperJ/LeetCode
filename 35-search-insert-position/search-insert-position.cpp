class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        //std::cout << "target " << target << endl;

        while (start <= end)
        {
            std::cout << "start " << start << endl;
            std::cout << "end " << end << endl;
            int midpoint = (start + end) / 2;
            std::cout << "midpoint " << midpoint << endl;

            if (nums[midpoint] == target)
            {
                return midpoint;
            }
            else
            {
                if (nums[midpoint] < target)
                {
                    start = midpoint + 1;
                }
                else if (nums[midpoint] > target)
                {
                    end = midpoint - 1;
                }
            }
        }

        return start;
    }
};