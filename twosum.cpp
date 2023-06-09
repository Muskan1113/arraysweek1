#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
          vector<int> twosum(vector<int>&nums,int target)
        {
            unordered_map<int,int>h;

            for(int i{},t; i<nums.size();i++)
            {
                if(h.find(t=target-nums[i])!=h.cend())
                {
                    return {h[t], i};
                }

                else
                {
                    h[nums[i]]=i;
                }

                
            }
            return{};

        }
};

int main()
{
    vector<int> nums = {3,2,4,5};
    int target = 8;

    Solution solution;
    vector<int> result = solution.twosum(nums, target);

    if(result.size() == 2)
    {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
        cout << "Values: " << nums[result[0]] << ", " << nums[result[1]] << endl;
    }
    else
    {
        cout << "No two elements sum up to the target." << endl;
    }

    return 0;

}