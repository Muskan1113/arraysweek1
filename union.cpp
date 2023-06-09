#include<bits/stdc++.h>
using namespace std;

class solution
{
    public:
            vector<int> unionnumber(vector<int>& nums1, vector<int>& nums2)
            {
                int l1= nums1.size();
                int l2= nums2.size();
                int i=0, j=0;
                vector<int> ans;

                sort(nums1.begin(), nums1.end());
                sort(nums2.begin(),nums2.end());

                while(i<l1 && j<l2)
                {
                    if(nums1[i]<nums2[j])
                    {
                        ans.push_back (nums1[i]);
                    i++;
                    }

                    else if(nums1[i]>nums2[j])
                    {
                         ans.push_back(nums2[j]);
                    j++;
                    }
                     
                    else
                    {
                        ans.push_back(nums1[i]);
                        j++;
                    }


                }
                while(i<l1)
                {
                    ans.push_back (nums1[i]);
                    i++;

                }

                while(j<l2)
                {
                    ans.push_back(nums2[j]);
                    j++;
                }

                ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;

            }
};

int main()
{
    vector<int> nums1{2,4,8,1,4,6,2,4,7,9,11,23,45,11,56,100,28,11,45,66,34,};
    vector<int> nums2{2,7,4,3,6,23,45,67,89,23,56,45,89,100,23};

    solution Solution;


    vector<int> result = Solution.unionnumber(nums1, nums2);
     for(int num:result)
     {
        cout<<num;
     }

     #ifndef ONLINE_JUDGE
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    #endif
    return 0;

}