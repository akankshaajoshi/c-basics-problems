class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> temp(nums);
        vector<int> stemp(nums.size());
        sort(temp.begin(), temp.end());
        for (int k = 0; k < nums.size(); k++)
        {
            for (int i = 0; i < temp.size(); i++)
            {
                stemp[(i+k)%temp.size()] = temp[i];
            }
            if (nums == stemp)
                return true;
        }
        return false;
    }
};