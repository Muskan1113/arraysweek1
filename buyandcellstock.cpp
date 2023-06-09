#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        vector<int> maxprofit(vector<int>& prices)
        {
            int minim= prices[0];
            int maxim=0;

            for(int i=0;i<prices.size();i++)
            {
                if (prices[i]-minim>maxim)
                {
                    maxim= prices[i]-minim;
                }

                if(prices[i]<minim)
                {
                    minim= prices[i];
                }
                

            }

            vector<int> result = {maxim};
        return result;
            
        }
};

int main()
{
    Solution solution;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    vector<int> result = solution.maxprofit(prices);
    cout << "Maximum profit: " << result[0] << endl;

    return 0;
}

