#include<bits/stdc++.h>
using namespace std;
class Solution
{

public:
     vector<int>Intersection(vector<int>& nums1, vector<int>& nums2)
     {
        int l1= nums1.size();
    int l2= nums2.size();
    vector<int> ans;
    int i=0,j=0;

    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());

    while(i<l1 && j<l2)
    {
        if(nums1[i]<nums2[j])
        {
            i++;
        }

        else if(nums1[i] == nums2[j])
        {
            ans.push_back(nums1[i]);
            i++;
            j++;
        }

        else if(nums1[i]>nums2[j])
        {
            j++;
        }
    

    }
    ans.erase(unique(ans.begin(),ans.end()), ans.end());
    return ans;
    }
};

int main ()
{
    vector<int>nums1{ 2000,3000,1111,1356,2345,689};
    vector<int>nums2{3000,43,56,45,34,65,78,98,4000,1111};
    Solution solution;
    vector<int> result = solution.Intersection(nums1,nums2);
     for(int num: result)
     {
        cout<<num;
     }
      #ifndef ONLINE_JUDGE
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    #endif
}