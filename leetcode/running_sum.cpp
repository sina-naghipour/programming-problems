#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    Solution(){
        return;
    }
    vector<int> runningSum(vector<int>& nums){
        int temp = 0;
        for (int i = nums.size(); i > 0; i--)
        {
            temp = 0;   
            for (int j = 0; j <= i; j++)
            {
                temp += nums[j];
            }
            nums[i] = temp;
        }
        return nums;
    }
};
int main(){
    Solution solution = Solution();
    vector<int> arr = {1,2,3,4};

    vector<int> res = solution.runningSum(arr);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    
    return 0;
}