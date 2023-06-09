#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public: 
      void rotate(vector<int>& nums, int k)
    {
        int n = nums.size();
    k = k % n; // Adjust k if it's greater than the size of the vector
    
    // Reverse the entire vector
    reverse(nums.begin(), nums.end());
    
    // Reverse the first k elements
    reverse(nums.begin(), nums.begin() + k);
    
    // Reverse the remaining elements
    reverse(nums.begin() + k, nums.end());
    }
        
    
    
    
};

int main()
{
    vector<int> nums{-1,-100,3,99};
    int k= 2;
    Solution solution;
    solution.rotate(nums,k);

    cout << "Rotated Array: ";
    for (int num : nums) 
    {
        cout << num << " ";
    }
    cout << endl;

    
}
